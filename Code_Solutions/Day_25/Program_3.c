/*Question 3:
Write a program to convert infix expression to postfix operation using stack.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack
{
    int top;
    char items[MAX_SIZE];
};

void push(struct Stack* stack, char item)
{
    if (stack->top == MAX_SIZE - 1)
    {
        printf("Stack is full. Push Operation cancelled!\n");
    }
    else
    {
        stack->items[++stack->top] = item;
    }
}

char pop(struct Stack* stack)
{
    if (stack->top == -1)
    {
        printf("Stack is empty. Pop Operation Cancelled!\n");
        return '\0';
    }
    else
    {
        return stack->items[stack->top--];
    }
}

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int precedence(char ch)
{
    switch (ch)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void infixToPostfix(char* infix)
{
    struct Stack stack;
    stack.top = -1;

    char postfix[MAX_SIZE];
    int i, j = 0;

    for (i = 0; infix[i]; i++)
    {
        char ch = infix[i];

        if (isOperand(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(&stack, ch);
        }
        else if (ch == ')')
        {
            while (stack.top != -1 && stack.items[stack.top] != '(')
            {
                postfix[j++] = pop(&stack);
            }
            if (stack.top != -1 && stack.items[stack.top] == '(')
            {
                pop(&stack);
            }
        }
        else
        {
            while (stack.top != -1 && precedence(ch) <= precedence(stack.items[stack.top]))
            {
                postfix[j++] = pop(&stack);
            }
            push(&stack, ch);
        }
    }

    while (stack.top != -1)
    {
        postfix[j++] = pop(&stack);
    }

    postfix[j] = '\0';
    printf("Postfix expression: %s\n", postfix);
}

int main()
{
    char infix[MAX_SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix);

    return 0;
}

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char stack[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_operand(char ch);
bool is_operator(char ch);
void process_operator(char op);
void read_process_expression(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    make_empty();
    read_process_expression();
    
    return 0;
}

bool is_operand(char ch)
{
    bool check = false;
    // If ch is in {'0', '1', ..., '9'}
    if (48 <= ch && ch <= 57)
        check = true;
        
    return check;
}

bool is_operator(char ch)
{
    bool check = false;
    
    switch (ch) {
        case '+': case'-': case '*': case '/': case '=':
            check = true; break;
    }
    return check;
}


void process_operator(char op)
{
    int l_operand, r_operand, res;
    
    // if operator == '-'
    if (op == '=') {
        printf("Value of expression: %d\n", pop() - 48);
        return;
    }
    
    r_operand = pop() - 48;
    l_operand = pop() - 48;
    
    switch (op) {
        case '+':
            res = l_operand + r_operand;
            break;
        case '-':
            res = l_operand - r_operand;
            break;
        case '*':
            res = l_operand * r_operand;
            break;
        case '/':
            res = l_operand / r_operand;
            break;
    }
    push(res + 48);
    return;
}

void read_process_expression(void)
{
    char ch;
    
    printf("Enter an RPN expression: ");
    for (;;)
    {
        scanf(" %c", &ch);
        if (is_operand(ch) == true)
            push(ch);
        else if (is_operator(ch) == true)
            process_operator(ch);
        else
            continue;
        
        if (ch == '=')
            break;
    }
    return;
}
void make_empty(void)
{
    top = 0;
    return;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if (is_full())
        stack_overflow();
    else
        stack[top++] = ch;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return stack[--top];
}

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

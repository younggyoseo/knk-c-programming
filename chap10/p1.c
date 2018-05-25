#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;
bool underflow_check = false;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
void print_result(bool check);
bool enter_and_check_input(void);
bool is_parenthesis_or_brace(char ch);

/* main */
int main(void)
{
    bool proper_check;
    
    make_empty();  // initiate a new stack
    proper_check = enter_and_check_input();
    print_result(proper_check);
    
    return 0;
}

/*
 * make_empty: Makes a new stack with top = 0
 */
void make_empty(void)
{
    top = 0;
}

/*
 * is_empty: Checks whether stack is empty or not
 */
bool is_empty(void)
{
    return top == 0;
}

/*
 * is_full: Checks whether stack is full or not.
 */
bool is_full(void)
{
    return top == STACK_SIZE;
}

/*
 * push: Push character to stack. If stack is full, call stack_overflow().
 */
void push(char ch)
{
    if (is_full())
        stack_overflow();
    else {
        printf("%c is pushed.\n", ch);
        contents[top++] = ch;
    }
}

/*
 * pop: Pop character from stack. If stack is empty, call stack_underflow().
 */
char pop(void)
{
    if (is_empty())
        stack_underflow();
    else {
        printf("%c is popped.\n", contents[top-1]);
        return contents[--top];
    }
}

/*
 * stack_overflow: alert users that Stack Overflow happened and terminates program.
 */
void stack_overflow(void)
{
    printf("Stack Overflow!\n");
    exit(EXIT_SUCCESS);
}

/*
 * stack_underflow: alert users that Stack Underflow happend.
 */
void stack_underflow(void)
{
    printf("Stack Underflow!\n");
    printf("Cannot perform pop.\n");
    underflow_check = true;
}

/*
 * print_result: print result for input boolean value.
 */
void print_result(bool check)
{
    if (check == true)
        printf("Parentheses/braces are nested properly.\n");
    else if (check == false)
        printf("Parentheses/braces are not nested properly.\n");
}

/*
 * enter_and_check_input: Receives inputs from user and preprocess data with stack.
 */
bool enter_and_check_input(void)
{
    char ch;
    bool check;
    
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n')
    {
        if (is_parenthesis_or_brace(ch) != true)
            continue;
        else
            switch (ch) {
                case '{': case '(':
                    push(ch); break;
                case '}': case ')':
                    pop(); break;
            }
    }
    check = true;
    if (is_empty() != true)
        check = false;
    else if (underflow_check == true)
        check = false;
    
    return check;
}

/*
 * is_parenthesis_or_brace: Check whether input character is parenthesis or brace.
 */
bool is_parenthesis_or_brace(char ch)
{
    bool check = false;
    if ((ch == '{') ||
        (ch == '}') ||
        (ch == ')') ||
        (ch == '(')) {
           check = true;
       }

   return check;
}

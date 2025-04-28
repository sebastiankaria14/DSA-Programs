/*
Name: Servesh Khade
Roll No: 26
Batch: B
Program: Program to convert Infix to Postfix Expression
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Initializing array
char infix[50], postfix[50], stck[10];
int tos = -1; // Stack initialization condition

// Function prototypes
void push(char x);
char pop();
int priority(char z);

// Start of main function
void main() {
    int i = 0, j = 0;

    printf("Enter an infix Expression: ");
    fgets(infix, sizeof(infix), stdin);

    // Start of while loop
    while (infix[i] != '\0' && infix[i] != '\n') {
        if (isdigit(infix[i]) || isalpha(infix[i])) {
            postfix[j] = infix[i];
            j++;
        }
        else if (infix[i] == '(') {
            push(infix[i]);
        }
        else if (infix[i] == ')') {
            while (stck[tos] != '(') {
                postfix[j] = pop();
                j++;
            }
            tos--; // Discard the '(' from the stack
        }
        else {
            // Pop operators of higher or equal precedence
            while (tos != -1 && priority(stck[tos]) >= priority(infix[i]) && stck[tos] != '(') {
                postfix[j] = pop();
                j++;
            }
            push(infix[i]);
        }
        i++;
    }

    // Pop remaining operators in the stack
    while (tos != -1) {
        postfix[j] = pop();
        j++;
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression

    printf("\nPostfix expression is: %s\n", postfix);
} // End of main function

// Start of push function
void push(char x) {
    if (tos == 9) {
        printf("Stack is Full!\n");
        exit(1);
    } else {
        tos++;
        stck[tos] = x;
    }
} // End of push function

// Start of pop function
char pop() {
    if (tos == -1) {
        printf("Stack is Empty!\n");
        exit(1);
    } else {
        char y = stck[tos];
        tos--;
        return y;
    }
} // End of pop function

// Start of priority function
int priority(char z) {
    if (z == '*' || z == '/') {
        return 2;
    } else if (z == '+' || z == '-') {
        return 1;
    }
    return 0;
} // End of priority function

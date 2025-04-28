/*
Name- Servesh Khade
 Roll no.- 26
Batch - B
Program - Program for Expression Evaluation
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

// Initializing stack
int stack[SIZE];
int top = -1;

// Function prototypes
void push(int a);
int pop();
int checkdigit(char a);
int eval(int a, int b, char o);

// Start of main function
void main() {
    // Declaring variables
    char x;
    int m, n, k;

    printf("Enter the Postfix Expression : ");

    // Start of while loop
    while ((x = getchar()) != '\n') {
        if (checkdigit(x)) {
            push(x - '0');
        } else {
            if (top < 1) {
                printf("Invalid Postfix Expression\n");
                return;
            }
            n = pop();
            m = pop();
            k = eval(m, n, x);
            push(k);
        }
    } // End of while loop

    if (top == 0) {
        k = pop();
        printf("The answer is: %d\n", k);
    } else {
        printf("Invalid Postfix Expression\n");
    }
} // End of main function

// Start of push function 
void push(int a) {
    if (top >= SIZE - 1) {
        printf("Stack is full\n");
    } else {
        stack[++top] = a;
    }
} // End of push function

// Start of pop function 
int pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        exit(1); // Exit to prevent underflow
    }
    return stack[top--];
} // End of pop function

// Start of checkdigit function 
int checkdigit(char a) {
    return (a >= '0' && a <= '9');
} // End of checkdigit function

// Start of eval function
int eval(int a, int b, char o) {
    // Start of switch case
    switch (o) {
        case '+': return (a + b);
        case '-': return (a - b);
        case '*': return (a * b);
        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
                exit(1);
            }
            return (a / b);
        case '%':
            if (b == 0) {
                printf("Error: Modulus by zero\n");
                exit(1);
            }
            return (a % b);
        default:
            printf("Invalid operator\n");
            return 0;
    } // End of switch case
} // End of eval function


/*
Name- Servesh Khade
Roll no.- 26
Batch - B
Program - Program to implement linked list implementation of queue
*/



#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* next;
};

struct node* list = NULL;

struct node* getnode() {
    return (struct node*)malloc(sizeof(struct node));
}

void freenode(struct node* p) {
    free(p);
}

void insertatend(int x) 
{
    struct node* newnode = getnode();
    newnode->info = x;
    newnode->next = NULL;

    if (list == NULL) {
        list = newnode;
    }
    else
    {
        struct node* temp = list;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void deleteatbeg() {
    if (list == NULL) {
        printf("List is Empty\n");
        return;
    }

    struct node* temp = list;
    list = list->next;
    printf("Dequeued element: %d\n", temp->info);
    freenode(temp);
}

void display() {
    struct node* temp = list;
    if (list == NULL) {
        printf("List is Empty\n");
        return;
    }
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    while (1) {
        int ch;
        printf("***** Linked List Implementation of Queue *****\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: 
            {
                int x;
                printf("Enter element to be inserted at end: ");
                scanf("%d", &x);
                insertatend(x);
                break;
            }
            case 2:
                deleteatbeg();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;  // Just in case the loop is ever exited
}



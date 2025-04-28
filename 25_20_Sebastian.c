/*
Name: Servesh Khade
Roll No: 26
Batch: B
Program: Implementation of Binary Search
*/

#include <stdio.h>

// Function Prototypes
int bs(int *a, int first, int last);
void sort(int *a, int first, int last);
void result(int found);

// Declaring variables
int n, x;
int found = 0;

// Start of main function
void main() {
    // Accepting number of elements in the list
    printf("Enter the number of elements you want to add in the list: ");
    scanf("%d", &n);

    // Initializing array
    int a[n];
    char ch = 'Y';

    // Accepting elements in the array
    printf("Enter elements in the list:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter a%d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Check if the array is unsorted and sort it
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            sort(a, 0, n - 1); // Calling function sort
            break;
        }
    }

    // Searching for numbers in the list
    while (ch == 'Y' || ch == 'y') {
        printf("Enter the number you want to search for: ");
        scanf("%d", &x);
        found = bs(a, 0, n - 1); // Calling function bs
        result(found);           // Calling function result
        printf("Do you want to search for any other number in the list?\nEnter 'Y' for Yes and 'N' for No: ");
        scanf(" %c", &ch);
        if (ch == 'N' || ch == 'n') {
            printf("Exiting...\n");
        }
    }
} // End of main function

// Start of binary search function (bs)
int bs(int *a, int first, int last) {
    if (first > last) {
        return 0;
    }
    int mid = (first + last) / 2;
    if (a[mid] == x) {
        return 1;
    } else if (x < a[mid]) {
        return bs(a, first, mid - 1);
    } else {
        return bs(a, mid + 1, last);
    }
} // End of bs function

// Start of sort function (Quick Sort)
void sort(int *a, int first, int last) {
    int i, j, pivot, temp;
    if (first < last) {
        pivot = first;
        i = first;
        j = last;

        // Start partitioning
        while (i < j) {
            while (a[i] <= a[pivot] && i < last) {
                i++;
            }
            while (a[j] > a[pivot]) {
                j--;
            }
            if (i < j) {
                // Swap
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        // Swap pivot with a[j]
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        // Recursive sort calls
        sort(a, first, j - 1);
        sort(a, j + 1, last);
    }
} // End of sort function

// Start of result function
void result(int found) {
    if (found == 1) {
        printf("%d is present in the given list.\n", x);
    } else {
        printf("%d is not present in the given list.\n", x);
    }
} // End of result function

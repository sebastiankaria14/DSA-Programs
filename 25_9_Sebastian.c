#include <stdio.h>

int main() {
    int size, i, j;
    int unq;
      int a[10]; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
  
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("Unique elements in the array are: ");
    for (i = 0; i < size; i++) {
        unq= 1; 
        for (j = 0; j < size; j++) {
            if (i != j && a[i] == a[j]) {
                unq = 0; 
                break;
            }
        }
        if (unq==1) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}

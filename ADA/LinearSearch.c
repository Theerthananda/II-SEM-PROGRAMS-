/*
 * @author Theerthananda
 */
#include<stdio.h>

void LinearSearch(int a[], int n);

int main() {
    int a[50], n;

    printf("Enter size of an array :");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    LinearSearch(a, n);

    printf("\nProgram ended !");
    return 0;
}

void LinearSearch(int a[], int n) {
    int flag = 0;
    int data;

    printf("Enter the element to search:");
    scanf("%d", &data);

    for(int i = 0; i < n; i++) {
        if(a[i] == data) {
            printf("The data is found at %d index", i);
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("Element not found :");
    }
}
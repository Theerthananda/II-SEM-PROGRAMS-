/*
 * @author Theerthananda
 */
#include<stdio.h>

void InsertionSortAscending(int a[], int n);

int main(){
    int a[50], n;

    printf("Enter size of an array :");
    scanf("%d", &n);

    printf("Enter the array elements :");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    InsertionSortAscending(a, n);

    printf("\nArray elements in Ascending Order:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

void InsertionSortAscending(int a[], int n){
    int temp, j;

    for(int i = 1; i < n; i++){
        temp = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > temp){
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }
}
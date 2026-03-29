/*
 * @author Theerthananda
 */
#include<stdio.h>

void SelectionSortAscending(int a[], int n);

int main(){
    int a[50], n;

    printf("Enter size of an array :");
    scanf("%d", &n);

    printf("Enter the array elements :");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    SelectionSortAscending(a, n);

    printf("\nArray elements in Ascending Order:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;	
}

void SelectionSortAscending(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;

        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }

        if(min != i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
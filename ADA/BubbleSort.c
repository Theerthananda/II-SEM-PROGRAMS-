/*
 * @author Theerthananda
 */
#include<stdio.h>

void BubbleSortAscending(int a[], int n);

int main() {
    int a[50], n;

    printf("Enter size of an array :");
    scanf("%d", &n);

    printf("Enter array elements :");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    BubbleSortAscending(a, n);

    printf("\nArray elements in Ascending Order:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

void BubbleSortAscending(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int flag = 0;

        for(int j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }

        if(flag == 0)
            break;
    }
}
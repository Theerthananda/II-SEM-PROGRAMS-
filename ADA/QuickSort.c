/*
 * @author Theerthananda
 */
#include<stdio.h>

void QuickSort(int a[], int lb, int ub);
int Partition(int a[], int lb, int ub);

int main() {
    int a[50], n;

    printf("Enter size of an array :");
    scanf("%d", &n);

    printf("Enter array elements :");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    QuickSort(a, 0, n - 1);

    printf("\nArray elements in Ascending Order:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

// QUICK SORT
void QuickSort(int a[], int lb, int ub) {
    if(lb < ub){
        int loc = Partition(a, lb, ub);
        QuickSort(a, lb, loc - 1);
        QuickSort(a, loc + 1, ub);
    }
}

// PARTITION
int Partition(int a[], int lb, int ub){
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    int temp;

    while(start < end){

        while(a[start] <= pivot && start < ub){
            start++;
        }

        while(a[end] > pivot){
            end--;
        }

        if(start < end){
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }

    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;

    return end;
}
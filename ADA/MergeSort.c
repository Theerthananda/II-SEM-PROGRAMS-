/*
 * @author Theerthananda
 */
#include<stdio.h>

void MergeSortAscending(int a[], int lb, int ub);
void Merge(int a[], int lb, int mid, int ub);

int main() {
    int a[50], n;

    printf("Enter size of an array :");
    scanf("%d", &n);

    printf("Enter array elements :");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    MergeSortAscending(a, 0, n - 1);

    printf("\nArray elements in Ascending Order:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

void Merge(int a[], int lb, int mid, int ub){
    int i = lb, j = mid + 1, k = lb;
    int b[50];

    while(i <= mid && j <= ub){
        if(a[i] <= a[j]){
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }

   while(i <= mid){ 
        b[k++] = a[i++];
    }

    while(j <= ub){
        b[k++] = a[j++];
    }

    for(k = lb; k <= ub; k++){
        a[k] = b[k];
    }
}

void MergeSortAscending(int a[], int lb, int ub){
    if(lb < ub){
        int mid = (lb + ub) / 2;

        MergeSortAscending(a, lb, mid);
        MergeSortAscending(a, mid + 1, ub);
        Merge(a, lb, mid, ub);
    }
}
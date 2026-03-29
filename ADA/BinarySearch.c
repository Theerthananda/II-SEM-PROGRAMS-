/*
 * @author Theerthananda
 */
#include <stdio.h>

int BinarySearch(int a[], int n, int data);

int main() {
    int a[50], n, data, res;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d sorted (ascending) elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &data);

    res = BinarySearch(a, n, data);

    if(res == -1)
        printf("Element not found!");
    else
        printf("Element found at index %d", res);

    return 0;
}

int BinarySearch(int a[], int n, int data) {
    int low = 0, high = n - 1, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == data)
            return mid;
        else if(data < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}
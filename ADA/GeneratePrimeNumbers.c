#include<stdio.h>

void GenPrime(int a[], int n);

int main(){
    int n;

    printf("Enter range to generate prime numbers: ");
    scanf("%d", &n);

    int a[n+1];   //if errror occurs change to a[50] or how much size needed.

    GenPrime(a, n);

    return 0;
}

void GenPrime(int a[], int n) {

    // Initialize array
    for(int i = 2; i <= n; i++){
        a[i] = i;
    }

    // Sieve logic
    for(int i = 2; i <= n; i++){
        if(a[i] != 0){
            for(int j = i + 1; j <= n; j++){
                if(a[j] % a[i] == 0){
                    a[j] = 0;
                }
            }
        }
    }

    // Print primes
    printf("Prime numbers are:\n");
    for(int i = 2; i <= n; i++){
        if(a[i] != 0){
            printf("%d ", a[i]);
        }
    }

    printf("\n");
}
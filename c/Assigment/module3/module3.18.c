#include <stdio.h>

void sort(int *arr, int n);

int main() {
    int arr[50], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Sorted array:\n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void sort(int *arr, int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(*(arr+j) > *(arr+j+1)) {
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

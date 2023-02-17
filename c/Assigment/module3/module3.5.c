#include <stdio.h>

int main(void) {
    
    int current = 1, previous = 0;
    int max;

    printf("Enter the maximum number in the Fibonacci series: ");
    scanf("%d", &max);

    printf("%d ", previous);
    printf("%d ", current);

    while (current + previous <= max) {
        int next = current + previous;
        printf("%d ", next);
        previous = current;
        current = next;
    }

    return 0;
}

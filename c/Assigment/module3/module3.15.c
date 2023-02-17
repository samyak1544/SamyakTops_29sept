#include <stdio.h>

void fibonacci(int n) {
    int i, a = 0, b = 1, c;

    printf("%d %d ", a, b);

    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int num;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}

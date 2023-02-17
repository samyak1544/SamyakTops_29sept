#include <stdio.h>

int main() {
    
    float mark1, mark2, mark3, mark4, mark5;
    float total, percentage;

    printf("Enter the marks of the 5 subjects: ");
    scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = (total / 500) * 100;

    if (percentage > 75) {
        printf("Distinction\n");
    } else if (percentage > 60) {
        printf("First class\n");
    } else if (percentage > 50) {
        printf("Second class\n");
    } else if (percentage > 35) {
        printf("Pass class\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}


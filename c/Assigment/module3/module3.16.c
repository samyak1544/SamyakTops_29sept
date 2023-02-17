#include <stdio.h>

int isPalindrome(int num, int rev) {
    if (num == 0) {
        return rev;
    } else {
        rev = rev * 10 + num % 10;
        return isPalindrome(num / 10, rev);
    }
}

int main() {
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    rev = isPalindrome(num, rev);

    if (num == rev) {
        printf("%d is a palindrome number\n", num);
    } else {
        printf("%d is not a palindrome number\n", num);
    }

    return 0;
}

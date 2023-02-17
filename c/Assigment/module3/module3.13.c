#include <stdio.h>
#include <string.h>

void stringCopy(char *source, char *destination) {
    while (*source) {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    scanf("%s", source);

    stringCopy(source, destination);

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}

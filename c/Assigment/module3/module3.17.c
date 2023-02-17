#include <stdio.h>
#include <string.h>


struct Employee {
    int empNo;
    char empName[50];
    char empAddress[100];
    int empAge;
};

int main() {
    int num1, num2, sum;
    char str1[50], str2[50], result[100];


    struct Employee emp[5];

    
    emp[0].empNo = 1;
    strcpy(emp[0].empName, "Samyak");
    strcpy(emp[0].empAddress, "123 nirnaynagar, Amd");
    emp[0].empAge = 30;

    emp[1].empNo = 2;
    strcpy(emp[1].empName, "Jane");
    strcpy(emp[1].empAddress, "456 gota, Amd");
    emp[1].empAge = 25;

    emp[2].empNo = 3;
    strcpy(emp[2].empName, "Bob");
    strcpy(emp[2].empAddress, "789 chandlodya, Amd");
    emp[2].empAge = 35;

    emp[3].empNo = 4;
    strcpy(emp[3].empName, "Alice");
    strcpy(emp[3].empAddress, "101 cg road, Amd");
    emp[3].empAge = 28;

    emp[4].empNo = 5;
    strcpy(emp[4].empName, "Tom");
    strcpy(emp[4].empAddress, "Gota, Amd");
    emp[4].empAge = 42;

    
    printf("Employee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee Number: %d\n", emp[i].empNo);
        printf("Employee Name: %s\n", emp[i].empName);
        printf("Employee Address: %s\n", emp[i].empAddress);
        printf("Employee Age: %d\n\n", emp[i].empAge);
    }

   
    printf("Enter two numbers to add: ");
    scanf("%d %d", &num1, &num2);
    int *p1 = &num1;
    int *p2 = &num2;
    sum = *p1 + *p2;
    printf("Sum = %d\n\n", sum);

    
    printf("Enter two strings to concatenate: ");
    scanf("%s %s", str1, str2);
    char *p3 = str1;
    char *p4 = str2;
    strcpy(result, p3);
    strcat(result, p4);
    printf("Concatenated string: %s\n", result);

    return 0;
}

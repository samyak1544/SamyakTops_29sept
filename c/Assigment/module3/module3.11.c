#include <stdio.h>

int main() {
  int arr[10];
  int i, pos;

 
  printf("Enter 10 numbers: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  
  printf("Enter the position of the element you want to find: ");
  scanf("%d", &pos);

 
  if (pos < 1 || pos > 10) {
    printf("Invalid position!\n");
    return 0;
  }

 
  printf("The element at position %d is: %d\n", pos, arr[pos-1]);

  return 0;
}

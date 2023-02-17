#include <stdio.h>
#include <math.h>

int main() {
int choice;
float area, base, height, radius;

printf("1. Area of Triangle\n");
printf("2. Area of Rectangle\n");
printf("3. Area of Circle\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice) {
	case 1:
printf("Enter base and height of the triangle: ");
scanf("%f%f", &base, &height);
area = 0.5 * base * height;
printf("Area of the triangle: %.2f\n", area);
break;
case 2:
printf("Enter length and width of the rectangle: ");
scanf("%f%f", &base, &height);
area = base * height;
printf("Area of the rectangle: %.2f\n", area);
break;
case 3:
printf("Enter radius of the circle: ");
scanf("%f", &radius);
area = M_PI * radius * radius;
printf("Area of the circle: %.2f\n", area);
break;
default:
printf("Invalid choice\n");
}
return 0;
}
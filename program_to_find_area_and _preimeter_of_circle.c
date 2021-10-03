// Write the program to find area and perimeter of circle.
#include <stdio.h>
int main() {

float r, pi, area, perimeter;
pi = 3.14;  

printf("Enter the radius of circle: ");  // Enter  3;
scanf("%f", &r);  //taking input

area = pi*r*r;  // formula to find area of circle.
perimeter = 2*pi*r;  // formula to find perimeter of circle.

printf("The area of circle is %f\n", area); //output: 28.2600
printf("The perimeter of circle is %f", perimeter); //output: 18.8400

    return 0;
}

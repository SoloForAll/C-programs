#include <stdio.h>
int main() {
    float radius;
    printf("enter radius of circle");
    scanf("%f", &radius);
    
    float circumferenceOfCircle = 2 * 3.14 * radius; 
    float areaOfCircle = 3.14 * radius * radius;

    printf("Circumference of circle is: %.2f\n", circumferenceOfCircle);
    printf("Area of circle is: %.2f\n", areaOfCircle);

    return 0;
} 
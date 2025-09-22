// wap that swaps two variables using a third variable

#include <stdio.h>
int main() {
    int a, b, temp;
    printf("enter two numbers");
scanf("%d %d", &a, &b); 

temp = a;
a = b;
b = temp;
printf("after swapping , a = %d and b = %d", a, b);
return 0;

}
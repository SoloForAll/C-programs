// wap that checks whether the two numbers entered are equal or not
#include <stdio.h>
int main() {
    int a, b;
    printf("enter two values");
    scanf("%d %d", &a, &b);
 
    if (a == b) {
        printf("The two numbers are equal");
    } else {
        printf("The two numbers are not equal");
    }
    return 0;
}

// wap that accepts the temperature in centigrade and convert it into fahre
#include <stdio.h>
int main() {
    float C;
    printf("enter temperature in centigrade");
    scanf("%f", &C);

    float F = (C * 9 / 5) + 32;
    printf("The temperature is %.2f fahrenheit", F);
    
    return 0;
}  
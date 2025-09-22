#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    float average = total / 5.0;

    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}

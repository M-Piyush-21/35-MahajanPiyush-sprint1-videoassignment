#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of the two numbers is: %d\n", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int a, b, copy;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d", &b);
    copy = a;
    a = b;
    b = copy;
    printf("The swapped values of A is %d \n",a);
    printf("The swapped values of B is %d",b);
}
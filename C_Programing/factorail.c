#include <stdio.h>

int main(){
    int num;
    int fact = 1;

    printf("Enter a number : ");
    scanf("%d",&num);

    for(int i=num; i > 0; i--)
    {
        fact = fact * i;
    }

    printf("Factorial is %d", fact);
}
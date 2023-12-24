#include <stdio.h>

int main() {
    float p, n;
    float r=9.5;
    printf("Enter your principle amount : ");
    scanf("%f",&p);
    printf("Enter how many years you want to invest : ");
    scanf("%f", &n);

    float SI = (p*r*n)/100;
    float AM = (SI+p);

    printf("Your simple interest amounts to $%f \n", SI);
    printf("Your final amount is $%f", AM);
}
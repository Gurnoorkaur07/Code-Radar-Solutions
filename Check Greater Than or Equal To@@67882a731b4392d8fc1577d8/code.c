#include<stdio.h>
int main() {
    int a;
    printf("Enter first number:");
    scanf("%d",&a);
    int b;
    printf("Enter second number:");
    scanf("%d",&b);
    if(a>=b) printf("True");
    else printf("False");
    return 0;
}
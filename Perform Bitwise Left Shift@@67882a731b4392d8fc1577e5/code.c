#include<stdio.h>
int main(){
    #include <stdio.h>

int main() {
    int num, shift;

    // Input the number and shift amount
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter shift amount: ");
    scanf("%d", &shift);

    // Perform left shift
    int result = num << shift;

    // Print the result
    printf("Result after left shift: %d\n", result);

    return 0;
}

}
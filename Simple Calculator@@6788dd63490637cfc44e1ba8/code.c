#include <stdio.h>
int main() {
    int a, b;
    char op;
    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        printf("error");
        return 1;
    }
    switch (op) {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("error");
            } else {
                printf("%d", a / b);
            }
            break;
        default:
            printf("error");
    }
    return 0;
}

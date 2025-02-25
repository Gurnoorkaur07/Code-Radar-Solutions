#include <stdio.h>

int findLowestSetBitPosition(int n) {
    int position = 0;
    
    while (n > 0) {
        if (n & 1) {
            return position;
        }
        position++;
        n >>= 1;
    }
    
    return -1; 
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", findLowestSetBitPosition(n));
    return 0;
}

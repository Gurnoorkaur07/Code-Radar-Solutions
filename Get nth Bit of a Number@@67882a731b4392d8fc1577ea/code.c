#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a&(1<<b)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
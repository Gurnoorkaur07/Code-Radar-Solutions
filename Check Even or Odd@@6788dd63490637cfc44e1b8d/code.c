#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=2){
        printf("Even");
    }
    else if (num!=2){
        printf("Odd");
    }
    return 0;
}
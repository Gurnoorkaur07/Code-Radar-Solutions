#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int bits=sizeof(int)*8;
    if(a&(1<<(bits -1))){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}
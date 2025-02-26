#include<stdio.h>
int main(){
    int num,pos;
    scanf("%d %d",&num,&pos);
    num=num|(1<<pos);
    printf("%d",num);
    return 0;
}
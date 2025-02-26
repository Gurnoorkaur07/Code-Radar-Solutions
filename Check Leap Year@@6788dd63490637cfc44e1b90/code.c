#include<stdio.h>
int main(){
    int Year;
    scanf("%d",&Year);
    if((Year%4==0 && Year%100 !=0)||(Year%400==0)){
        printf("%d",Leap Year);
    }else{
        printf("%d",Not a Leap Year);
    }return 0;
}
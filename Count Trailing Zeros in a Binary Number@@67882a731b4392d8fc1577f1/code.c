#include<stdio.h>
int countTrailingZeroes(int num){
    if(num==0) return 32;
    int count=0;
    while((num&1)==0){
        count++;
        num>>=1;
    }
    return count;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",countTrailingZeroes(num));
    return 0;
}
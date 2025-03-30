#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int nst;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=nst;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
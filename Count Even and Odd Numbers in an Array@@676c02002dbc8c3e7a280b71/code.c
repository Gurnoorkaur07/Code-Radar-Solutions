#include<stdio.h>
int main(){
    int n, evenCount, oddCount=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    printf("%d %d", evenCount,oddCount);
    return 0;
}
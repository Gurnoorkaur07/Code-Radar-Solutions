#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int valid=0;
    int first;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                valid=1;
                first=arr[i];
                break;
            }
        }
        if(valid==1){
            break;
        }
    }
    if(valid==1){
        printf("%d",first);
    }
    else{
        printf("-1");
    }
    return 0;
}
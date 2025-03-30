#include<stdio.h>
void reverse(int arr[], int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}
void rotateRight(int arr[], int N, int K){
    K=K%N;
    reverse(arr, 0, N-1);
    reverse(arr, 0, K-1);
    reverse(arr, K, N-1);
}
int main(){
    int N, K;
    scanf("%d", &N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d", &K);
    rotateRight(arr, N,K);
    for(int i=0;i<N;i++){
        printf("%d", arr[i]);
    }
    return 0;
}
#include <stdio.h>
#include<limits.h>
int findUnsortedSubarray(int arr[],int n){
    
    int s;    
    for(s=0;s<n-1;s++){ 
        if(arr[s]>arr[s+1]){            
            break;            
        }      
    }
    if(s==n-1){
        return 0;
    }
    int e;

    for(e=n-1;e>=0;e--){       
        if(arr[e]<arr[e+1]){            
            break;
        }
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=s+1;i<e;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }   
    }
    while(s>=0 && arr[s]>min){
        s--;
    }
    while(e<n && arr[e]<max){
        e++;
    }
    return e-s-1;
}
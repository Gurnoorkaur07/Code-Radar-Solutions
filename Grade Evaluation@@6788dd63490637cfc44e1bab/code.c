#include<stdio.h>
int main(){
    char grade;
    scanf("%c",&grade);
    if(grade==A){
        printf("Excellent");
    }else if(grade==B){
        prinf("Good");
    }else if(grade==C){
        print("Average");
    }else if(grade==D){
        printf("Below Average");
    }else if(grade==F){
        prinf("Fail");
    }else{
        printf("Invalid");
    }
    return 0;
}
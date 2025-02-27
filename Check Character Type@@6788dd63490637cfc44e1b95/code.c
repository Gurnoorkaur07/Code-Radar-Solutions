#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    of(isdigit(ch)){
        printf("Digit");
    }else if(isalpha(ch)){
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch='i'||ch=='o'||ch=='u'){
            printf("Vowel");
        }else{
            printf("Conosonant");
        }else{
            printf("Special Character");
        }
    }
    return 0;
}
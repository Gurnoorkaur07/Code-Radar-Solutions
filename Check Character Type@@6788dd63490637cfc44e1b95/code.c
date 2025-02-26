#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&char);
    if(ch>='0'&&ch<='9'){
        printf("digit");
    }else if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch='e'||ch='i'||ch='o'||ch='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}
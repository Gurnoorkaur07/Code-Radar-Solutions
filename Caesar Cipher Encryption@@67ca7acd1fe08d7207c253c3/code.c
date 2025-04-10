#include<stdio.h>
#include<string.h>

void caesarCipher(char message[] , int shift , char encrypted[]){

    int i=0;
    while (message[i] !='\0'){
        char l = message[i] + shift;
        encrypted[i] = l;
        i++;
    }

}
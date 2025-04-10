#include <stdio.h>
#include <ctype.h>
void caesarCipher(char *message, int shift) {
    char ch;
    for (int i = 0; message[i] != '\0'; ++i) {
        ch = message[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            message[i] = (ch - base + shift) % 26 + base;
        }
    }
    printf("Encrypted message: %s\n", message);
}
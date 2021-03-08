#include <iostream>
#include <stdlib.h>

int cast_int(char* date) {
    return atoi(date);
}

void trim_slash(char* frase) {
    int size = strlen(frase);

    for (int i = 0; i < size; i++) {
        if (frase[i] == '/') {
            for (int j = i; j < size; j++) {
                frase[j] = frase[j + 1];
            }
            size--;
        }
    }
}

char* reverse_date(char* frase) {
    int size = strlen(frase);

    for (int i = 0, j = size - 1; i < j; i++, j--) {
        char aux = frase[i];
        frase[i] = frase[j];
        frase[j] = aux;
    }

    return frase;
}
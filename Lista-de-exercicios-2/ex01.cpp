#include <iostream>

void trim(char* frase) {
    int size = strlen(frase);

    for (int i = 0; i < size; i++) {
        if (frase[i] == ' ') {
            for (int j = i; j < size; j++) {
                frase[j] = frase[j + 1];
            }
            size--;
        }
    }
}

char* reverse(char* frase) {
    int size = strlen(frase);

    for (int i = 0, j = size - 1; i < j; i++, j--) {
        char aux = frase[i];
        frase[i] = frase[j];
        frase[j] = aux;
    }

    return frase;
}

void lower(char* frase) {
    char c;
    for (int i = 0; i < strlen(frase); i++) {
        for (c = 'A'; c <= 'Z'; c++) {
            if (c == frase[i]) {
                frase[i] = (int)frase[i] + 32;
            }
        }
    }

}
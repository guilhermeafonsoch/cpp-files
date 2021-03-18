#include "AuxiliarFunctions.h"
#include <iostream>

// removing spaces
void cut_space(char *frase, int size) {
	for (int i = 0; i < size; i++) {
		if (frase[i] == ' ') {
			for (int j = i; j < size; j++) {
				frase[j] = frase[j + 1];
			}
			size--;
		}
	}
}

// removing slashes
void cut_slashes(char* frase, int size) {
	for (int i = 0; i < size; i++) {
		if (frase[i] == '/') {
			for (int j = i; j < size; j++) {
				frase[j] = frase[j + 1];
			}
			size--;
		}
	}
}



//funcao para checar os simbolos
bool check_symbols(char top1, char top2) {
	if (top1 == '(' && top2 == ')' || top1 == ')' && top2 == '(') {
		return true;
	}

	if (top1 == '{' && top2 == '}' || top1 == '}' && top2 == '{') {
		return true;
	}

	if (top1 == '[' && top2 == ']' || top1 == ']' && top2 == '[') {
		return true;
	}

	if (top1 == '<' && top2 == '>' || top1 == '>' && top2 == '<') {
		return true;
	}
	return false;
}

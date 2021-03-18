#include <iostream>
#include <string>
#include <algorithm>
#include "StaticStack.h"
#include "AuxiliarFunctions.h"

using namespace std;

void ex1() {
	char frase[101];
	StaticStack FirstStack = Create();
	StaticStack SecondStack = Create();

	cin.ignore();
	cout << "Digte a frase de ate 101 caracteres para descobrir se palindromo --> ";
	cin.getline(frase, 101);

	int size = strlen(frase);

	// removing spaces
	for (int i = 0; i < size; i++) {
		if (frase[i] == ' ') {
			for (int j = i; j < size; j++) {
				frase[j] = frase[j + 1];
			}
			size--;
		}
	}

	//tolower frase
	for (int i = 0; i <= size; i++) {
		frase[i] = tolower(frase[i]);
	}

	//push into two stacks
	for (int i = 0; i < size / 2; i++) {
		Push(FirstStack, frase[i]);
		Push(SecondStack, frase[size - i - 1]);
	}

	bool IsPalindrime = true;

	//checking if is palindrome
	for (int j = 0; j < size / 2; j++) {
		if (Top(FirstStack) == Top(SecondStack)) {
			Pop(FirstStack);
			Pop(SecondStack);
		}
		else {
			IsPalindrime = false;
		}
	}

	if (IsPalindrime) {
		cout << "A frase digitada eh um palindromo\n";
	}
	else {
		cout << "A frase digitada nao eh um palindromo\n";
	}
}

void ex2() {
	char data[12];
	StaticStack FirstStack = Create();
	StaticStack SecondStack = Create();

	cin.ignore();
	cout << "Digte uma data no formato DD/MM/YYYY para descobrir se palindromo --> ";
	cin.getline(data, 12);

	int size = strlen(data);


	// removing slash
	for (int i = 0; i < size; i++) {
		if (data[i] == '/') {
			for (int j = i; j < size; j++) {
				data[j] = data[j + 1];
			}
			size--;
		}
	}

	//push into two stacks
	for (int i = 0; i < size / 2; i++) {
		Push(FirstStack, data[i]);
		Push(SecondStack, data[size - i - 1]);
	}

	bool IsPalindrime = true;

	//checking if is palindrome
	for (int j = 0; j < size / 2; j++) {
		if (Top(FirstStack) == Top(SecondStack)) {
			Pop(FirstStack);
			Pop(SecondStack);
		}
		else {
			IsPalindrime = false;
		}
	}

	if (IsPalindrime) {
		cout << "A data digitada eh um palindromo\n";
	}
	else {
		cout << "A data digitada nao eh um palindromo\n";
	}
}


void ex3() {
	string expression;
	StaticStack FirstStack = Create();
	StaticStack SecondStack = Create();

	cin.ignore();
	cout << "Digite a expressao desejada -->";
	getline(cin, expression);

	char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!?.#*;:|/&";

	//remove os caractyers
	expression.erase(remove(expression.begin(), expression.end(), ' '), expression.end());
	for ( int i = 0; i < strlen(chars); ++i){
		expression.erase(remove(expression.begin(), expression.end(), chars[i]), expression.end());
	}
	
	int size = expression.length();

	for (int i = 0; i < size / 2; i++) {
		Push(FirstStack, expression[i]);
		Push(SecondStack, expression[size - i - 1]);
	}

	//checkando se eh palindromo
	bool IsPalindrime = true;
	for (int j = 0; j < size / 2; j++) {
		char a = Top(FirstStack);
		char b = Top(SecondStack);
		if (check_symbols(a,b)) {
			Pop(FirstStack);
			Pop(SecondStack);
		}
		else {
			IsPalindrime = false;
		}
	}

	if (IsPalindrime) {
		cout << "A expressao digitada eh um palindromo\n";
	}
	else {
		cout << "A expressao digitada nao eh um palindromo\n";
	}

}



int main(){
	cout << "=== Lista 2 ===\n";

	int option = 0;
	do{
		cout << "\n<<< OPCOES >>>\n"
			<< "[0] Sair\n"
			<< "[1] Palavra Palindromo\n"
			<< "[2] Data Palindromo\n"
			<< "[3] Expressao\n"
			<< "Escolha uma opcao -->";
		cin >> option;
		cout << '\n';

		switch (option)
		{
		case 1: ex1(); break;
		case 2: ex2(); break;
		case 3: ex3(); break;
		}
	} while (option != 0);

}


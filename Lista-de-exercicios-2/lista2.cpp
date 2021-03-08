#include <iostream>
#include <stdlib.h>
#include "ex01.h"
#include "ex02.h"

using namespace std;

void ex1(){
    char frase[101];
    char copied_frase[101];

    cout << "Digite uma frase para saber se eh uma polindromo --> ";
    cin.ignore();
    cin.getline(frase, 101);

    trim(frase);

    strcpy_s(copied_frase, frase);

    reverse(frase);

    lower(copied_frase);
    lower(frase);

    bool teste = true;
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == copied_frase[i]) {
            teste = true;
        }
        else {
            teste = false;
            break;
        }
    }

    if (teste) {
        cout << "A frase " << copied_frase << " eh um palindromo";
    }
    else {
        cout << "A frase " << copied_frase << " nao eh um palindromo";
    }
    
    cout << '\n';
}


void ex2() {
    char date[15], copied_date[15];
    int date_int1, date_int2;

    cout << "Digite uma data para saber se ela eh um polindromo --> ";
    cin.ignore();
    cin.getline(date, 15);

    trim_slash(date);

    strcpy_s(copied_date, date);

    reverse_date(date);

    date_int1 = cast_int(copied_date);
    date_int2 = cast_int(date);

    if (date_int1 == date_int2) {
        cout << "A data digitada eh um palindromo";
    }
    else {
        cout << "A data digitada nao eh um palindromo";
    }

    cout << '\n';
}

int main() {
	cout << "Estrutura de dados I - Lista de Exercicios 2 \n";

	int option = 0;
	do{
	    cout << "\n=== OPCOES ===:\n"
			 << "[0] Sair\n"
			 << "[1] Polindromos (EX1)\n"     
             << "[2] Polindromos de datas (EX2)\n";
        
        cout << "Digite sua opcao: ";
		cin >> option;
		cout << '\n';

		switch (option){
		    case 1: ex1(); break;
            case 2: ex2(); break;
		}
	} while (option != 0);
}
    


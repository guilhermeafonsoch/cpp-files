#include <iostream>
#include <string>
#include <ctime>
#include "StaticQueue.h"
#include "Produto.h"

using namespace std;

StaticQueue marcaA = Create();
StaticQueue marcaB = Create();


void cadastrar() {
	// marca
	int marca;
	
		cout << "\nQaul a marca de agua que quer cadastrar? \n"
			<< "[1] Marca A\n"
			<< "[2] Marca B\n"
			<< "Digite a opcao desejada:";
		cin >> marca;
	
	

	// data e hora
	time_t data = time(nullptr);

	//estante
	int estante;
	cout << "\nDigite qual o numero da estante do produto: ";
	cin >> estante;

	//gaveta
	int gaveta;
	cout << "\nDigite qual o numero da gaveta do produto: ";
	cin >> gaveta;

	//prateleira
	int prateleira;
	cout << "\nDigite qual 0 numero da prateleira do produto: ";
	cin >> prateleira;

	if (marca == 1) {
		Produto agua = { 'A', data, estante, gaveta, prateleira };
		Enqueue(marcaA, agua);
		cout << "Marca: " << agua.marca << '\n';
		cout << "Data: " << agua.data << '\n';
		cout << "Estante: " << agua.estante << '\n';
		cout << "Gaveta: " << agua.gaveta << '\n';
		cout << "Prateleira: " << agua.armario << '\n';
		cout << "Este produto da marca A registrado com sucesso!\n";
	
	}
	else if (marca == 2){
		Produto agua = { 'B', data, estante, gaveta, prateleira };
		Enqueue(marcaB, agua);
		cout << "Marca: " << agua.marca << '\n';
		cout << "Data: " << agua.data << '\n';
		cout << "Estante: " << agua.estante << '\n';
		cout << "Gaveta: " << agua.gaveta << '\n';
		cout << "Prateleira: " << agua.armario << '\n';
		cout << "Este produto da marca B registrado com sucesso!\n";
	}

}

void vender() {
	int marca;
	
		cout << "\nQaul a marca de agua que quer vender? \n"
			<< "[0] Qualquer uma\n"
			<< "[1] Marca A\n"
			<< "[2] Marca B\n"
			<< "Digite a opcao desejada:";
		cin >> marca;
	
	if (marca == 1) {
		Produto vendido = Dequeue(marcaA);
		cout << "Marca: " << vendido.marca << '\n';
		cout << "Data: " << vendido.data << '\n';
		cout << "Estante: " << vendido.estante << '\n';
		cout << "Gaveta: " << vendido.gaveta << '\n';
		cout << "Prateleira: " << vendido.armario << '\n';

		cout << "A agua da marca A foi vendida!\n";
	}
	else if (marca == 2) {
		Produto vendido = Dequeue(marcaB);
		cout << "Marca: " << vendido.marca << '\n';
		cout << "Data: " << vendido.data << '\n';
		cout << "Estante: " << vendido.estante << '\n';
		cout << "Gaveta: " << vendido.gaveta << '\n';
		cout << "Prateleira: " << vendido.armario << '\n';

		cout << "A agua da marca B foi vendida!\n";
	}
	else if (marca == 0) {
		if (Front(marcaA).data <= Front(marcaB).data) {
			Produto vendido = Dequeue(marcaA);
			cout << "Marca: " << vendido.marca << '\n';
			cout << "Data: " << vendido.data << '\n';
			cout << "Estante: " << vendido.estante << '\n';
			cout << "Gaveta: " << vendido.gaveta << '\n';
			cout << "Prateleira: " << vendido.armario << '\n';

			cout << "A agua mais antiga foi a da marca A e foi vendida!\n";
		}
		else {
			Produto vendido = Dequeue(marcaB);
			cout << "Marca: " << vendido.marca << '\n';
			cout << "Data: " << vendido.data << '\n';
			cout << "Estante: " << vendido.estante << '\n';
			cout << "Gaveta: " << vendido.gaveta << '\n';
			cout << "Prateleira: " << vendido.armario << '\n';

			cout << "A agua mais antiga foi a da marca B e foi vendida!\n";
		}
	}
}




int main() {
	int option;
	do {
		cout << "\n === SISTEMA DE AGUAS === \n"
			<< "[0] Sair do sistema\n"
			<< "[1] Cadastrar\n"
			<< "[2] Vender\n"
			<< "Opcao desejada: ";
		cin >> option;
		if (IsEmpty(marcaA) && option == 2) {
			cout << "Nao ha produtos da marca A no estoque";
		}else{
			vender();
		}
		if (IsEmpty(marcaB) && option == 2) {
			cout << "Nao ha produtos da marca B no estoque";
		}
		else {
			vender();
		}
		if (option == 1) {
			cadastrar();
		}


	} while (option != 0);

}
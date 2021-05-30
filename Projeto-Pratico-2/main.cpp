// Nome: Guilherme Afonso TIA: 32030657
// Nome: Eduardo Gonçalves TIA: 32028016

#include <iostream>
#include <sstream>
#include "DinamicStack.h"

float Conta( std::string& operador, DinamicStack& stack) {
	float num1 = Pop(stack);
	float num2 = Pop(stack);
	float result = 0;
	
	if (num1 == FLT_MAX || num2 == FLT_MAX) operador = "\0" ;
	switch (operador[0]){
	case '+':
		result = num2 + num1;
		Push(stack, result);
		break;
	case '-':
		result = num2 - num1;
		Push(stack, result);
		break;
	case '*':
		result = num2 * num1;
		Push(stack, result);
		break;
	case '/':
		result = num2 / num1;
		Push(stack, result);
		break;

	default:
		return result = FLT_MAX;
		break;
	}
	return result;
}

int main()
{
	DinamicStack numbers = Create();
	while (true) {
		// CHECK PARA ESVAZIAR A PILHA 
		Clear(numbers);
		
		//DEFININDO VAR
		float result = FLT_MAX;
		int num_numb = 0;
		int num_op = 0;
		
		// MAIN DO PDF AJUSTADA 
		std::string input;
		std::cout << ">";
		std::getline(std::cin, input);
		if (input == "0") break;
		std::istringstream iss(input);
		std::string str;

		while (iss >> str) {
			//numeros 
			try {
				float value = std::stof(str);
				Push(numbers, value);
				num_numb++;
				
			}
			//operadores
			catch (std::invalid_argument e) {
				num_op++;
				result = Conta(str, numbers);
			}
		}
		if (num_numb - num_op != 1) std::cout << "Erro na expressao.\n";
		else if (result != FLT_MAX) std::cout << result << "\n";
		else std::cout << "Erro na expressao.\n";
		

	}

	
	std::cout << "Fim.";
	
}
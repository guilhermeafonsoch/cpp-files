#include <iostream>

using namespace std;

//funcao utilizando ponteiros
void trocar(float *n1, float *n2){
    float aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main (){
    float n1,n2;
    
    //pegando os numeros
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    //resultado anterior
    cout << "Antes --> Primeiro numero = " << n1 << " Segundo numero = " << n2;

    //passagem por referencia
    trocar(&n1,&n2);

    cout << "\nDepois --> Primeiro numero = " << n1 << " Segundo numero = " << n2;

    return 0;
}


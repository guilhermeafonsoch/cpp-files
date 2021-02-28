// Nome: Guilherme Afonso
// TIA: 32030657


#include <iostream>

using namespace std;

int main (){
    
    int vect[10];


    for(int i = 0; i <= 9; i++){
        cout << "Digite o numero da posicao " << i+1 << " --> ";
        cin >> vect[i];
    }

    cout << "O numeros digitados ao contrario sao: ";
    for(int i = 9; i >=0 ; i--){
        cout << vect[i] << " ";
    }
    cout << " .";


    return 0;
}
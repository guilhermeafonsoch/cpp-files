// Nome: Guilherme Afonso
// TIA: 32030657


#include <iostream>

using namespace std;

float MulViaAdd(float f1, int i1){
    float result;

    for(int i = 0; i < i1; i++){
        result += f1;
    }

    return result;
}

int main (){
    int n2;
    float result, n1;

    cout << "Digite o primeiro numero(real): ";
    cin >> n1;
    cout << "Digite o segundo numero(inteiro): ";
    cin >> n2;

    result = MulViaAdd(n1,n2);

    cout << "O resultado da funcao MulViaAdd() com os numeros informados eh --> " << result;


    return 0;
}
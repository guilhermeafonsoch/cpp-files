// Nome: Guilherme Afonso
// TIA: 32030657

#include <iostream>

using namespace std;

float Max(float n1, float n2){
    if(n1 < n2){
        return n2;
    }else if(n2 < n1){
        return n1;
    }else{
        throw invalid_argument("Os numeros sao iguais");
    }
}

int main (){
    float n1,n2, result;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    result = Max(n1,n2);

    cout << "O maior numero digitado eh o " << result << " .";


    return 0;
}
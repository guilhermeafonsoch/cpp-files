#include <iostream>

using namespace std;

int main (){
    int fatorial, num;

    cout << "Digite o numeor para ver seu fatorial: ";
    cin >> num;

    for(fatorial = 1; num > 1; num -= 1){
        fatorial *= num;
    }

    cout << "O fatorial calculado =  " << fatorial;

    return 0;
}
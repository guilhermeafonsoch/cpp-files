// Nome: Guilherme Afonso
// TIA: 32030657

#include <iostream>

using namespace std;

int main (){
    int x,y;

    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    int new_y = 8 - (3 * x);

    if(new_y == y){
        cout << "O ponto ("<< x << " e "<< y << ") faz parte da reta cuja a equacao eh 3x + y = 8,"; 
    }else{
        cout << "O ponto ("<< x << " e "<< y << ") nao faz parte da reta cuja a equacao eh 3x + y = 8,"; 
    }

    return 0;
}
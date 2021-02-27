#include<iostream>

using namespace std;

int main(){
    int num, fb1 = 1, fb2 = 1, ni;

    cout << "Digite o numero de termos para a sequencia de fibonacci: ";
    cin >> num;

    cout << "Serie de Fibonacci --> ";
    for (int i = 1; i <= num; i++){
        cout << fb1 << " ";
        ni = fb1 + fb2;
        fb1 = fb2;
        fb2 = ni;
    }

    return 0;
}

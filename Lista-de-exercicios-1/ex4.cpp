#include <iostream>

using namespace std;

int main (){
    int num;
    
    cout << "Digite o numero: ";
    cin >> num;

    if(num % 2 == 0){
        cout << "O numero " << num << " eh par";
    }else{
        cout << "O numero " << num << " eh impar";
    }

    return 0;
}
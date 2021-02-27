#include <iostream>

using namespace std;


int main (){
    char letra;
    char vogais[5] = {'a','e','i','o','u'};
    bool sn = false;


    cout << "Digite a letra: ";
    cin >> letra;

    for(int i = 0; i < 5; i++){
        if(vogais[i] == letra){
            sn = true;
        }
    }

    if(sn){
        cout << "A letra " << letra << " eh uma vogal";
    }else{
        cout << "A letra " << letra << " nao eh uma vogal";
    }


    return 0;
}
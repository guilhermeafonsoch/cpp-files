// Nome: Guilherme Afonso
// TIA: 32030657

#include <iostream>

using namespace std;


int main(){
    float km, temp, vel_media;

    cout << "Digite a distancia em km: ";
    cin >> km;
    cout << "Digite o tempo em hrs: ";
    cin >> temp;

    vel_media = km/temp;

    if(vel_media > 90){
        cout << "A velocidade media ficou acima de 90 Km/h sendo igual a " << vel_media << " Km/h";
    }else{
        cout << "A velocidade media nao ficou acima de 90 Km/h sendo igual a " << vel_media << " Km/h";
    }

    return 0;
}
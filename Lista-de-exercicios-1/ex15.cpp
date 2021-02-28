// Nome: Guilherme Afonso
// TIA: 32030657

#include <iostream>
#include <cmath>

using namespace std;

bool AreCirclesColliding(float x1,float y1,float x2,float y2,float r1,float r2){
    float distance;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if(r1 + r2 < distance){
        return false;
    }else{
        return true;
    }

}


int main (){
    float x1, y1, x2, y2, r1, r2;
    bool result;

    cout << "Digite o x1: ";
    cin >> x1;
    cout << "Digite o y1: ";
    cin >> y1;
    cout << "Digite o r1: ";
    cin >> r1;
    cout << "Digite o x2: ";
    cin >> x2;
    cout << "Digite o y2: ";
    cin >> y2;
    cout << "Digite o r2: ";
    cin >> r2;

    result = AreCirclesColliding(x1,y1,x2,y2,r1,r2);

    if (result == 0){
        cout << "Os circulos nao se colidem";
    }else{
        cout << "Os circulos se colidem";
    }


}
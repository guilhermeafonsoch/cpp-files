// Nome: Guilherme Afonso
// TIA: 32030657

#include <iostream>

using namespace std;

void trocar(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}


int separate(int vect[], int beginning, int end){
    int pivot = vect[end];
    int i = (beginning - 1);

    for (int j = beginning; j <= end - 1; j++){
        if(vect[j] <= pivot){
            i++;
            trocar(&vect[i], &vect[j]);
        }
    }
    trocar(&vect[i+1], &vect[end]);
    return(i+1);
}

void quickSort(int vect[], int beggining, int end){
    if(beggining < end){
        int separatei = separate(vect, beggining, end);

        quickSort(vect, beggining, separatei - 1);
        quickSort(vect, separatei + 1, end);
    }
}


int main (){

    int vect[10];

    for(int i = 0; i < 10; i++){
        cout << "Digite o numero da posicao " << i << " :";
        cin >> vect[i];
    }
    
    quickSort(vect, 0, 9);

    cout << "O menor numero digitado eh = " << vect[0] << " e o maior eh = " << vect[9];




    return 0;
}
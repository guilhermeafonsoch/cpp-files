// Nome: Guilherme Afonso
// TIA: 32030657

#include <iostream>

using namespace std;

int VowelsCount(char letters[100]){
    int num_vowels=0;
    
    for(int i = 0; letters[i] != '\0'; i++){
        switch(letters[i]){
            case 'a':  
            case 'A':
            case 'e':  
            case 'E':
            case 'i':  
            case 'I':
            case 'o': 
            case 'O':
            case 'u':  
            case 'U':
            num_vowels++;
            }
        }

    return num_vowels;
}

int main (){
    char frase[101];
    int num_vowels;

    cout << "Digite uma frase para saber o numero de vogais --> ";
    cin.getline(frase, 101);

    num_vowels = VowelsCount(frase);

    cout << "O numero de vogais na frase eh igual a "<< num_vowels << "." ;

    return 0;
}
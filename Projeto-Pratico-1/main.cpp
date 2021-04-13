// Guilherme Afonso TIA: 32030657
// Eduardo Goncalves TIA: 32028016

#include <iostream>
#include "StaticDeque.h"

using namespace std;

int main(){
	StaticDeque deque = Create();

    cout << "************ STATIC DEQUE ************\n";
    int option;

    do {
        cout << "\n<<< OPCOES >>>\n"
            << "[0] Sair\n"
            << "[1] InsertFront\n"
            << "[2] InsertBack\n"
            << "[3] RemoveFront\n"
            << "[4] RemoveBack\n"
            << "[5] Front\n"
            << "[6] Back\n"
            << "[7] Size\n"
            << "[8] Count\n"
            << "[9] IsEmpty\n"
            << "[10] Clear\n"
            << "Escolha uma opcao -->";
        cin >> option;
        cout << '\n';

        switch (option)
        {
        case 1: {
            char letter;
            cout << "Digite um char: ";
            cin >> letter;
            InsertFront(deque, letter);
            break;
        }
        case 2: {
            char letter;
            cout << "Digite um char: ";
            cin >> letter;
            InsertBack(deque, letter);
            break;
        }
        case 3: {
            RemoveFront(deque);
            break;
        }
        case 4: {
            RemoveBack(deque);
            break;
        }
        case 5: {
            cout << "O front do deque eh --> " << Front(deque);
            break;
        }
        case 6: {
            cout << "O back do deque eh --> " << Back(deque);
            break;
        }
        case 7: {
            cout << "O tamanho da pilha eh --> " << Size(deque);
            break;
        }
        case 8: {
            cout << "Ha " << Count(deque) << " no deque";
            break;
        }
        case 9: {
            cout << "A pilha esta vazia? --> " << IsEmpty(deque);
            break;
        }
        case 10: {
            cout << "O deque foi esvaziado! ";
            Clear(deque);
            break;
        }
        default: {
            cout << " Insira uma opcao valida!";
            break;
        }

        
        }
        cout << "\nO deque esta atualmente: : ";
        for (char c : deque.values) {
            cout << c << " ";
        }
        cout << '\n';
    } while (option != 0);

	
		
}
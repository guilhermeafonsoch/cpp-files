// Guilherme Afonso TIA: 32030657

#include <iostream>
#include "StaticStack.h"
#include "StaticQueue.h"

using namespace std;
using namespace DataStructures;


int main()
{
    Queue::StaticQueue queue = Queue::Create();

    cout << "************ STATIC QUEUE (with static stack) ************\n";
	int option;

	do{
        cout << "\n<<< OPCOES >>>\n"
            << "[0] Sair\n"
            << "[1] Enqueue\n"
            << "[2] Dequeue\n"
            << "[3] Front\n"
            << "[4] Size\n"
            << "[5] Count\n"
            << "[6] IsEmpty\n"
            << "[7] Clear\n"
            << "Escolha uma opcao -->";
        cin >> option;
        cout << '\n';
        switch (option){
        case 1: {
            if (!(queue.count == Stack::STATIC_STACK_CAPACITY)) {
                char elem;
                cout << "Digite um char para dar um enque: ";
                cin >> elem;
                Queue::Enqueue(queue, elem);
                break;
            }
            cout << "A pilha esta cheia!!!! ";
            break;
        }
        case 2: {
            char elem = Queue::Dequeue(queue);
            if (elem == '\0') {
                break;
            }
            cout << "\n O elemento retirado da fila eh --> " << elem << "\n";
            break;
        }
        case 3: {
            cout << "\nO front da pilha atual eh --> " << Queue::Front(queue);
            break;
        }

        case 4: {
            cout << "\nO tamanho da pilha total --> " << Queue::Size(queue);
            break;
        }
        case 5: {
            cout << "\nO tamanho da pilha atual eh --> " << Queue::Count(queue);
            break;
        }
        case 6: {
            cout << "\nA pilha esta vazia? --> " << Queue::IsEmpty(queue);
            break;
        }
        case 7: {
            Queue::Clear(queue);
            cout << "\nA pilha esta vazia!!! ";
            break;
        }
        default:
            cout << "Digite uma opcao valida! ";
            break;
        }
	} while (option != 0);
}

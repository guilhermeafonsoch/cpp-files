// Guilherme Afonso TIA:32030657
// Ednardo Goncalvez TIA:32028016

#include <iostream>
#include <clocale>
#include "LinkedList.h"

using namespace std;

void Print(const LinkedList* list) {
	Node* temp_node = list->head;
	while (temp_node != nullptr) {
		cout << temp_node->data << " ";
		temp_node = temp_node->next;
	}
	cout << "\n";
}



void PrintListInfo(const LinkedList* list) 
{ 
	if (IsEmpty(list)) 
	{ 
		cout << "Lista vazia!\n"; 
	} 
	else 
	{ 
		cout << "Lista: "; Print(list); 
	} 

}

int main() {
	setlocale(LC_ALL, "pt_BR"); 
	cout << "*** Lista Ligada/Encadeada (Linked List) ***\n"; 
	
	LinkedList* list = Create(); 
	PrintListInfo(list); 
	
	Insert(list, 1); 
	Insert(list, 2); 
	Insert(list, 3); 
	Append(list, 4); 
	Append(list, 5); 
	Append(list, 6); 
	PrintListInfo(list); 
	
	Clear(list); 
	PrintListInfo(list);

	Insert(list, 77); 
	Append(list, 88); 
	Insert(list, 99); 
	Append(list, 3); 
	Insert(list, 2); 
	Append(list, 1); 
	Insert(list, 0); 
	PrintListInfo(list); 
	
	Node* temp = RemoveNode(list, 3); 
	cout << "Nó removido: " << temp->data << '\n';
	delete temp;
	PrintListInfo(list);
	
	temp = RemoveHead(list);
	cout <<"Nó removido: "<< temp->data <<'\n';
	delete temp;
	PrintListInfo(list);
	
	temp = RemoveTail(list);
	cout <<"Nó removido: "<< temp->data <<'\n';
	delete temp;
	PrintListInfo(list);
	
	Destroy(list);
	
	cout <<"Fim.\n";

}
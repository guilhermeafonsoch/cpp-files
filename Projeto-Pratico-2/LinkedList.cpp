// Nome: Guilherme Afonso TIA: 32030657
// Nome: Eduardo Gonçalves TIA: 32028016

#include "LinkedList.h"

LinkedList* Create_List()
{
	LinkedList* list = new LinkedList;
	list->count = 0;
	list->head = nullptr;
	list->tail = nullptr;
	return list;
}

void Destroy(LinkedList* list){
	Clear(list);
	delete list;
	list = nullptr;
}

void Insert(LinkedList* list, float value)
{
	Node* node = CreateNode(value, list->head);
	if (IsEmpty(list)){
		list->tail = node;
	}
	list->head = node;
	list->count++;
}

void Append(LinkedList* list, float value){
	Node* node = CreateNode(value, nullptr);
	if (IsEmpty(list)){
		list->head = list->tail = node;
	}
	else{
		list->tail->next = node;
		list->tail = node;
	}
	list->count++;
}

Node* RemoveHead(LinkedList* list){
	if (IsEmpty(list)) return nullptr;

	Node* toRemove = list->head;

	if (list->head == list->tail) list->head = list->tail = nullptr;
	else list->head = list->head->next;
	list->count--;

	toRemove->next = nullptr;
	return toRemove;
}

Node* RemoveTail(LinkedList* list){
	if (list->head == list->tail) return RemoveHead(list);
	Node* toRemove = list->head;
	Node* previous = nullptr;

	while (toRemove != list->tail){
		previous = toRemove;
		toRemove = toRemove->next;
	}

	previous->next = nullptr;
	list->tail = previous;

	list->count--;

	toRemove->next = nullptr;
	return toRemove;
}

Node* RemoveNode(LinkedList* list, float value){
	Node* toRemove = list->head;
	Node* previous = nullptr;

	while (toRemove != nullptr && toRemove->data != value){
		previous = toRemove;
		toRemove = toRemove->next;
	}

	if (toRemove == list->head) return RemoveHead(list);
	else if (toRemove == list->tail) return RemoveTail(list);
	else if (toRemove != nullptr){
		previous->next = toRemove->next;
		list->count--;
		toRemove->next = nullptr;
		return toRemove;
	}
	return nullptr;
}

Node* GetHead(const LinkedList* list){return list->head;}

Node* GetTail(const LinkedList* list){return list->tail;}

Node* GetNode(const LinkedList* list, float value){
	Node* node = list->head;
	while (node != nullptr){
		if (node->data == value) return node;
		node = node->next;
	}
	return nullptr;
}

int Count_List(const LinkedList* list){return list->count;}

bool IsEmpty(const LinkedList* list){return list->head == nullptr && list->tail == nullptr;}

void Clear(LinkedList* list){
	Node* node = list->head;
	Node* next = nullptr;

	while (node != nullptr){
		next = node->next;
		DestroyNode(node);
		node = next;
	}

	list->head = list->tail = nullptr;
	list->count = 0;
}

Node* CreateNode(float data, Node* next){
	Node* node = new Node;
	node->data = data;
	node->next = next;
	return node;
}

void DestroyNode(Node* node){
	delete node;
	node = nullptr;
}

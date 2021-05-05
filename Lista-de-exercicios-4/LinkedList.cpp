#include "LinkedList.h"
#include <iostream>


LinkedList* Create(){
	LinkedList* list = new LinkedList;
	list->count = 0;
	list->head = nullptr;
	list->tail = nullptr;
	return list;
}

void Destroy(LinkedList* list){
	Clear(list);
	delete list;
}

void Insert(LinkedList* list, int elem) {
	Node* node = new Node;
	node->data = elem;
	node->next = list->head;
	if (list->head == nullptr) {
		list->tail = node;
	}
	list->head = node;
	list->count++;
}

void Append(LinkedList* list, int elem) {
	Node* node = new Node;
	node->data = elem;
	node->next = nullptr;
	if (IsEmpty(list)) {
		list->head = node;
		list->tail = node;
	}
	else {
		list->tail->next = node;
		list->tail = node;
	}
	list->count++;
}

Node* RemoveHead(LinkedList* list) {
	Node* toRemove = list->head;
	if (list->head == list->tail) {
		list->head = list->tail = nullptr;
	}
	else {
		list->head = list->head->next;
	}
	list->count--;
	return toRemove;
}

Node* CreateNode() {
	Node* node = new Node;
	return node;
}


Node* RemoveTail(LinkedList* list){
	if (list->tail == list->head)
	{
		return RemoveHead(list);
	}

	Node* toRemove = list->head;
	Node* previous = CreateNode();

	while (toRemove != list->tail)
	{
		previous = toRemove;
		toRemove = toRemove->next;
	}
	previous->next = nullptr;
	list->tail = previous;
	list->count--;
	return toRemove;
}

Node* RemoveNode(LinkedList* list, int elem) {
	Node* toRemove = list->head;
	Node* previus = nullptr;
	while (toRemove != nullptr && toRemove->data != elem) {
		previus = toRemove;
		toRemove = toRemove->next;
	}
	if (toRemove == nullptr) return nullptr;
	else if (toRemove == list->head) return RemoveHead(list);
	else if (toRemove == list->tail) return RemoveTail(list);
	else {
		previus->next = toRemove->next;
		list->count--;
		return toRemove;
	}
}

Node* GetNode(LinkedList* list, int value) {
	Node* node = list->head;
	while (node != nullptr) {
		if (node->data == value) return node;
		node = node->next;
	}
	return nullptr;
}


Node* GetHead(LinkedList* list) { return list->head; }

Node* GetTail(LinkedList* list) { return list->tail; }

int Count(LinkedList* list) { return list->count; }

bool IsEmpty(const LinkedList* list) { return list->head == nullptr && list->tail == nullptr; }

void Clear(LinkedList* list) {
	Node* node = list->head;
	Node* next = nullptr;

	while (node != nullptr) {
		next = node->next;
		delete node;
		node = next;
	}
	list->count = 0;
	list->head = nullptr;
	list->tail = nullptr;
}


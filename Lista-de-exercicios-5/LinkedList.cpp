#include "LinkedList.h"
#include <iostream>

#include <string>

using namespace std;


LinkedList* Create() {
	LinkedList* list = new LinkedList;
	list->count = 0;
	list->head = nullptr;
	list->tail = nullptr;
	return list;
}

void Destroy(LinkedList* list) {
	Clear(list);
	delete list;
}

void Insert(LinkedList* list, int id, string elem)
{
	Node* node = new Node;
	node->name = elem;
	node->id = id;

	if (IsEmpty(list))
	{
		list->tail = node;
		list->head = node;
	}
	else
	{
		node->previus = list->tail;
		list->head->previus = node;
		node->next = list->head;
		list->head = node;
	}
	list->count++;
}

void Append(LinkedList* list, int elem, string name) {
	Node* node = new Node;
	node->id = elem;
	node->name = name;
	node->next = list->head;
	node->previus = list->tail;
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


Node* RemoveTail(LinkedList* list) {
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
	previous->next = list->head;
	list->tail = previous;
	list->count--;
	return toRemove;
}

Node* RemoveNode(LinkedList* list, int elem) {
	Node* toRemove = list->head;
	Node* previus = nullptr;
	while (toRemove != list->tail && toRemove->id != elem) {
		previus = toRemove;
		toRemove = toRemove->next;
	}
	Node* next = toRemove->next;
	if (toRemove == list->head) return RemoveHead(list);
	else if (toRemove == list->tail) return RemoveTail(list);
	else {
		previus->next = toRemove->next;
		next->previus = toRemove->previus;
		list->count--;
		return toRemove;
	}
}

Node* GetNode(LinkedList* list, int value) {
	Node* node = list->head;
	while (node != nullptr) {
		if (node->id == value) return node;
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

	while (node != list->tail) {
		next = node->next;
		delete node;
		node = next;
	}
	delete node;
	list->count = 0;
	list->head = nullptr;
	list->tail = nullptr;
}


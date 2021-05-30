// Nome: Guilherme Afonso TIA: 32030657
// Nome: Eduardo Gonçalves TIA: 32028016

#include <string>
#include <iostream>
#include "DinamicStack.h"

DinamicStack Create(){	
	LinkedList* list = Create_List();
	DinamicStack stack = { 0, list };
	return stack;
}


bool Push(DinamicStack& stack, float elem){
	Insert(stack.list, elem);
	return true;
	
}


float Pop(DinamicStack& stack){
	Node* toRemove = RemoveHead(stack.list);
	if (toRemove == NULL) return FLT_MAX;
	return toRemove->data;
}


float Top(const DinamicStack& stack){
	if (IsEmpty(stack)) return -1;
	return stack.list->head->data;
}

int Count(const DinamicStack& stack){return stack.list->count;}


bool IsEmpty(const DinamicStack& stack){return stack.list->head == nullptr && stack.list->tail == nullptr;}


bool Clear(DinamicStack& stack){
	while (!IsEmpty(stack)){
		Pop(stack);
	}
	return IsEmpty(stack);
}


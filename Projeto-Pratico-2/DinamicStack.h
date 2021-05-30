// Nome: Guilherme Afonso TIA: 32030657
// Nome: Eduardo Gonçalves TIA: 32028016

#ifndef __DINAMIC_STACK_H__
#define __DINAMIC_STACK_H__
#include "LinkedList.h"

struct DinamicStack
{
	int current;
	LinkedList* list;
};

DinamicStack Create();

bool Push(DinamicStack& stack, float elem);

float Pop(DinamicStack& stack);

float Top(const DinamicStack& stack);

int Count(const DinamicStack& stack);

bool IsEmpty(const DinamicStack& stack);

bool Clear(DinamicStack& stack);

#endif // __STATIC_STACK_H__

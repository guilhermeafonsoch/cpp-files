#ifndef __LINKED_LIST_H__
#define	__LINKED_LIST_H__
#include <string>

using namespace std;


#include <string.h>

struct Node {
	int id;
	string name;
	Node* previus;
	Node* next;
};

struct LinkedList {
	int count;
	Node* head;
	Node* tail;
};

LinkedList* Create();

void Destroy(LinkedList* list);

void Insert(LinkedList* list, int elem,  string name);

void Append(LinkedList* list, int elem,  string name);

Node* RemoveHead(LinkedList* list);

Node* RemoveTail(LinkedList* list);

Node* RemoveNode(LinkedList* list, int value);

Node* GetHead(LinkedList* list);

Node* GetTail(LinkedList* list);

Node* GetNode(LinkedList* list, int value);

int Count(LinkedList* list);

bool IsEmpty(const LinkedList* list);

void Clear(LinkedList* list);


#endif
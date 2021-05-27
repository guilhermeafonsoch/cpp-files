#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include <string>

using namespace std;

struct Node
{
	int id;
	string name;
	Node* previous;
	Node* next;
};

struct LinkedList
{
	int count;
	Node* head;
	Node* tail;
};

LinkedList* Create();

Node* CreateNode(int id, string name, Node* previous, Node* next);

void Destroy(LinkedList* list);

void Insert(LinkedList* list, int id, string name);

void Append(LinkedList* list, int id, string name);

Node* RemoveHead(LinkedList* list);

Node* RemoveTail(LinkedList* list);

Node* RemoveNode(LinkedList* list, int id);

Node* GetHead(const LinkedList* list);

Node* GetTail(const LinkedList* list);

Node* GetNode(const LinkedList* list, int id);

int Count(const LinkedList* list);

bool IsEmpty(const LinkedList* list);

void Clear(LinkedList* list);

void DestroyNode(Node* node);

bool InsertBefore(LinkedList* list, int beforeId, int id, string name);

bool InsertAfter(LinkedList* list, int beforeId, int id, string name);

#endif
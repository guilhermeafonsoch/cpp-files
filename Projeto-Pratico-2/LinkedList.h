// Nome: Guilherme Afonso TIA: 32030657
// Nome: Eduardo Gonçalves TIA: 32028016

#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

struct Node{
	float data;
	Node* next;
};

struct LinkedList{
	int count;
	Node* head;
	Node* tail;
};

LinkedList* Create_List();

void Destroy(LinkedList* list);

void Insert(LinkedList* list, float value);

void Append(LinkedList* list, float value);

Node* RemoveHead(LinkedList* list);

Node* RemoveTail(LinkedList* list);

Node* RemoveNode(LinkedList* list, float value);

Node* GetHead(const LinkedList* list);

Node* GetTail(const LinkedList* list);

Node* GetNode(const LinkedList* list, float value);

int Count_List(const LinkedList* list);

bool IsEmpty(const LinkedList* list);

void Clear(LinkedList* list);

Node* CreateNode(float data, Node* next);

void DestroyNode(Node* node);

#endif //  __LINKED_LIST_H__
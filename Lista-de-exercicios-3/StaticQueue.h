#ifndef __STATIC_QUEUE_H__
#define __STATIC_QUEUE_H__

#include "Produto.h"

const int STATIC_QUEUE_CAPACITY = 32;

struct StaticQueue
{
	int front;
	int rear;
	int count;

	Produto values[STATIC_QUEUE_CAPACITY];
};


StaticQueue Create();


bool Enqueue(StaticQueue& queue, Produto elem);


Produto Dequeue(StaticQueue& queue);


Produto Front(const StaticQueue& queue);


int Size(const StaticQueue& queue);


int Count(const StaticQueue& queue);


bool IsEmpty(const StaticQueue& queue);


bool Clear(StaticQueue& queue);

#endif 
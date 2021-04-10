#include "StaticQueue.h"

StaticQueue Create()
{
	StaticQueue queue =
		{
		0,  
		0, 
		0, 
		{ 0 } 
	};

	return queue;
}


bool Enqueue(StaticQueue& queue, Produto elem)
{
	if (queue.count == Size(queue))
	{
		return false;
	}
	

	queue.values[queue.rear] = elem;

	queue.rear = (queue.rear + 1) % Size(queue); 

	++queue.count;

	return true;
}


Produto Dequeue(StaticQueue& queue)
{
	if (IsEmpty(queue))
	{
		return {'\0', 0,0,0,0};
	}

	Produto value = queue.values[queue.front];

	queue.front = (queue.front + 1) % Size(queue);
	queue.values[queue.front] = { 0 };


	--queue.count; 

	return value;
}


Produto Front(const StaticQueue& queue)
{
	if (IsEmpty(queue)) {
		return queue.values[0];
	}
	else {
		return queue.values[queue.front];
	}

}


int Size(const StaticQueue& queue)
{
	return sizeof(queue.values) / sizeof(queue.values[0]); 
}


int Count(const StaticQueue& queue)
{
	return queue.count;
}


bool IsEmpty(const StaticQueue& queue)
{
	return queue.count == 0;
}


bool Clear(StaticQueue& queue)
{
	while (!IsEmpty(queue))
	{
		Dequeue(queue);
	}

	return IsEmpty(queue);
}



#ifndef __STATIC_DEQUE_H__
#define	__STATIC_DEQUE_H__

const int STATIC_QUEUE_CAPACITY = 8;

struct StaticDeque
{
	int front;
	int rear;
	int count;

	char values[STATIC_QUEUE_CAPACITY];
};

StaticDeque Create();

bool InsertFront(StaticDeque& deque, char elem);

bool InsertBack(StaticDeque& deque, char elem);

char RemoveFront(StaticDeque& deque);

char RemoveBack(StaticDeque& deque);

char Front(const StaticDeque& deque);

char Back(const StaticDeque& deque);

int Size(const StaticDeque& deque);

int Count(const StaticDeque& deque);

bool IsEmpty(const StaticDeque& deque);

bool Clear(StaticDeque& queue);

#endif
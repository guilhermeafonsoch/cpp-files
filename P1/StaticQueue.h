#ifndef __STATIC_QUEUE_H__
#define __STATIC_QUEUE_H__

#include "StaticStack.h"


namespace DataStructures
{
	namespace Queue
	{

		struct StaticQueue
		{
			int front;
			int rear;
			int count;
				
			Stack::StaticStack stack_stack;
			Stack::StaticStack stack_queue;

		};

		StaticQueue Create();

		bool Enqueue(StaticQueue& queue, char elem);


		char Dequeue(StaticQueue& queue);


		char Front(StaticQueue& queue);


		int Size(const StaticQueue& queue);


		int Count(const StaticQueue& queue);


		bool IsEmpty(const StaticQueue& queue);


		bool Clear(StaticQueue& queue);

	}
}

#endif 
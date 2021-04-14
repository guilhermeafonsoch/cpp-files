#include "StaticQueue.h"
#include "StaticStack.h"
#include <iostream>
using namespace DataStructures;

namespace DataStructures
{
	namespace Queue
	{

		StaticQueue Create() {
			StaticQueue queue = { 0,0,0,  Stack::Create(), Stack::Create() };
			return queue;
		}

		bool Enqueue(StaticQueue& queue, char elem) {
			queue.count++;
			return Stack::Push(queue.stack_stack, elem);

		}

		char Dequeue(StaticQueue& queue) {
			if (queue.count == 0) {
				std::cout << "A pilha esta vazia!!";
				return  '\0';
			}

			while(!Stack::IsEmpty(queue.stack_stack)){
				Stack::Push(queue.stack_queue, Stack::Pop(queue.stack_stack));
			}

			char elem = Stack::Pop(queue.stack_queue);
			
			while (!Stack::IsEmpty(queue.stack_queue)) {
				Stack::Push(queue.stack_stack, Stack::Pop(queue.stack_queue));
			}

			queue.count--;
			return elem;

		}


		char Front( StaticQueue& queue) {
			if (queue.count == 0) {
				std::cout << "A pilha esta vazia!!";
				return  '\0';
			}
			while (!Stack::IsEmpty(queue.stack_stack)){
				Stack::Push(queue.stack_queue, Stack::Pop(queue.stack_stack));
			}
			
			char top = Stack::Top(queue.stack_queue);
			
			while (!Stack::IsEmpty(queue.stack_queue)){
				Stack::Push(queue.stack_stack, Stack::Pop(queue.stack_queue));
			}

			return top;
		}

		int Size(const StaticQueue& queue) {
			return sizeof(queue.stack_stack.values) / sizeof(queue.stack_stack.values[0]);
		}


		int Count(const StaticQueue& queue) {
			return queue.count;
		}


		bool IsEmpty(const StaticQueue& queue) {
			return queue.count == 0;
		}


		bool Clear(StaticQueue& queue) {
			while (!Stack::IsEmpty(queue.stack_stack)){
				Stack::Pop(queue.stack_stack);
			}
			queue.count = 0;
			return Stack::IsEmpty(queue.stack_stack);
		}

	}
}

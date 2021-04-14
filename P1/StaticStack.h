#ifndef __STATIC_STACK_H__
#define __STATIC_STACK_H__

namespace DataStructures
{
	namespace Stack
	{

		const int STATIC_STACK_CAPACITY = 4;

		struct StaticStack
		{
			int current;
			char values[STATIC_STACK_CAPACITY];
		};


		StaticStack Create();


		bool Push(StaticStack& stack, char elem);


		char Pop(StaticStack& stack);


		char Top(const StaticStack& stack);


		int Size(const StaticStack& stack);


		int Count(const StaticStack& stack);


		bool IsEmpty(const StaticStack& stack);


		bool Clear(StaticStack& stack);

	}
}
#endif 
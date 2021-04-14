#include "StaticStack.h"

namespace DataStructures
{
	namespace Stack
	{

StaticStack Create()
{
	StaticStack stack = { 0, { 0 } };
	return stack;
}


bool Push(StaticStack& stack, char elem)
{

	if (stack.current == STATIC_STACK_CAPACITY)
	{
		return false;
	}

	stack.values[stack.current] = elem;
	++stack.current;

	return true;
}


char Pop(StaticStack& stack)
{
	if (IsEmpty(stack))
	{
		return '\0';
	}

	char elem = stack.values[stack.current - 1];
	stack.values[stack.current - 1] = '\0';
	--stack.current;

	return elem;
}


char Top(const StaticStack& stack)
{
	if (IsEmpty(stack))
	{
		return '\0';
	}

	return stack.values[stack.current - 1];
}

int Size(const StaticStack& stack)
{
	return sizeof(stack.values) / sizeof(stack.values[0]);
}


int Count(const StaticStack& stack)
{
	return stack.current;
}


bool IsEmpty(const StaticStack& stack)
{
	return stack.current == 0;
}


bool Clear(StaticStack& stack)
{
	while (!IsEmpty(stack))
	{
		Pop(stack);
	}

	return IsEmpty(stack);
}


	} // namespace Stack
} // namespace DataStructures

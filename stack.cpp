#include "pch.h"
#include "stack.h"
#include <cstddef>
#include <iostream>
using namespace std;
Stack::Stack():top(nullptr)
{
}

Stack::Stack(const Stack & aStack):top(aStack.top)
{
}

Stack::~Stack()
{
	char next;
	while (!empty())
	{
		next = pop();
	}
}

void Stack::push(char theSymbol)
{
	StackFramePtr tempPtr = new StackFrame;
	tempPtr->data = theSymbol;
	tempPtr->link = top->link;
	top = tempPtr;
}

char Stack::pop()
{
	if (empty()) {
		exit(1);
	}
	char result = top->data;//顶上就是结果
	StackFramePtr tempPtr=top;//但是需要删除取出的结果	
	top = top->link;//顶部变成了下一个节点
	delete tempPtr;//这时就能删掉了
	return result;
}

bool Stack::empty() const
{
	return top==nullptr;
}

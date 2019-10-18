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
	char result = top->data;//���Ͼ��ǽ��
	StackFramePtr tempPtr=top;//������Ҫɾ��ȡ���Ľ��	
	top = top->link;//�����������һ���ڵ�
	delete tempPtr;//��ʱ����ɾ����
	return result;
}

bool Stack::empty() const
{
	return top==nullptr;
}

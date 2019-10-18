#pragma once
struct StackFrame
{
	char data;
	StackFrame *link;
};
typedef StackFrame* StackFramePtr;
class Stack {
public:
	Stack();
	Stack(const Stack& aStack);
	~Stack();
	void push(char theSymbol);
	char pop();
	bool empty() const;
private:
	StackFramePtr top;
};
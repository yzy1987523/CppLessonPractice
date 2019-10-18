#pragma once
struct QueueNode
{
	char data;
	QueueNode *link;
};
typedef QueueNode* QueueNodePtr;
class Queue
{
public:
	Queue();
	~Queue();
	void add(char item);
	char remove();
	bool empty();

private:
	QueueNodePtr front;
	QueueNodePtr back;
};

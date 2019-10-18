#include "pch.h"
#include "queue.h"
#include <iostream>
using namespace std;
Queue::Queue():front(nullptr),back(nullptr)
{
}

Queue::~Queue()
{
	char next;
	while (!empty()) {
		next = remove();
	}
}

void Queue::add(char item)
{
	if (empty()) {
		front = new QueueNode;
		front->data = item;
		front->link = nullptr;
		back = front;
	}
	else
	{
		QueueNodePtr tempPtr = new QueueNode;
		tempPtr->data = item;
		tempPtr->link = nullptr;
		back->link = tempPtr;
		back = tempPtr;//千万不要忘记：将back指针指向最后节点！！！
	}
}

char Queue::remove()
{
	if (empty())
	{
		exit(1);
	}
	char result = front->data;
	QueueNodePtr tempPtr = front->link;
	delete front;
	front = tempPtr;
	if (front==nullptr)//如果删除的是最后一个节点，back也要置空
	{
		back = nullptr;
	}
	return result;
}
bool Queue::empty()
{
	return  front== nullptr;//back==nullptr也可以
}
void queueTest() {
	Queue q;
	char next, ans;
	do 
	{
		cout << "Enter a word: ";
		cin.get(next);
		while (next != '\n') {
			q.add(next);
			cin.get(next);
		}
		cout << "You endtered: ";
		while (!q.empty())
		{
			cout << q.remove();
		}
		cout << endl;
		cout << "Again?(y/n):";
		cin >> ans;
		cin.ignore(1000, '\n');
	} while (ans!='n'&&ans!='N');
}

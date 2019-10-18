#include "node.h"
#include "pch.h"
#include <iostream>
using namespace std;
//struct Node
//{
//	int data;
//	Node *link;
//};
//typedef Node* NodePtr;
//
//NodePtr search(NodePtr& head, int number);
//void nodeTest1() {	
//	NodePtr head=new Node;
//	head->data = 1;
//	head->link = nullptr;
//
//	NodePtr node1 = new Node;
//	node1->data = 2;
//	node1->link = nullptr;
//
//	NodePtr node2 = new Node;
//	node2->data = 3;
//	node2->link = nullptr;
//
//	head->link = node1;//正常顺序
//
//	node2->link = head->link;//先衔接尾部
//	head->link = node2;//再接上头部
//
//	cout << head->data << endl;//1
//	cout << head->link->data << endl;//3
//	cout << head->link->link->data << endl;//2	
//}
//void nodeTest() {
//	NodePtr head = new Node;
//	head->data = 1;
//	head->link = nullptr;
//
//	NodePtr node1 = new Node;
//	node1->data = 2;
//	node1->link = nullptr;
//
//	NodePtr node2 = new Node;
//	node2->data = 3;
//	node2->link = nullptr;
//
//	head->link = node1;
//	node1->link = node2;
//	cout << search(head, 3)->data;
//}
//NodePtr search(NodePtr& head, int number) {
//	NodePtr here = head;
//	while (here!=nullptr&&here->data != number)
//	{
//		if (here == nullptr)return nullptr;
//		here = here->link;
//	}
//	return here;
//}



Node::Node(int value, Node * next):data(value),link(next)
{	
}

Node::Node():Node(0, nullptr)
{
}
const int Node::getDate()
{
	return data;
}
void nodeTest() {

}

#pragma once
//struct Node
//{
//	int data;
//	Node *link;
//};
class Node {
public:
	Node();
	Node(int value, Node*next);
	const int getDate();
private:
	int data;
	Node*link;
};
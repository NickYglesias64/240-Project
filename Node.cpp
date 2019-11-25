#include "Node.h"
using namespace std;


Node::Node()
{
	value = 0;
	next = nullptr; //TODO
}

Node::Node(int num)
{
	value = num;
	next = nullptr;
}

Node::Node(int num, Node *node)
{
	value = num;
	next = node;

}

Node::Node(const Node &node)
{
	value = node.value;
	next = node.next;

}

int Node::getValue() const
{
	return value;
}

Node * Node::getNext() const
{
	return next;
}

void Node::setValue(int num)
{
	value = num;
}

void Node::setNext(Node *node)
{
	next = node;
}

Node::~Node(){}

int value;
Node *next;

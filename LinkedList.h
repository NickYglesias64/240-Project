#pragma once
#include "Node.h"
class LinkedList
{
private:
	
	Node* head;
	Node* tail;
	int size;

public:
	LinkedList();
	LinkedList(int, int);
	~LinkedList();

	void init();
	void insert(int, int);
	int get(int);
	void remove(int);
	int getSize();
	void print();
};


#pragma once
class Node
{
public:
	int value;
	Node* next;
	Node();
	Node(int);
	Node(int, Node*);
	Node(const Node&);
	~Node();
	int getValue() const;
	Node* getNext() const;
	void setValue(int);
	void setNext(Node*);
	

	//./a.out 10000 < input10k.txt
	/*
	vector<int> my vect(size,0);
	for(int i =0;i<myVect.size();i++) {
		myVect[i] = i;
	}
	
	*/
};


#include "LinkedList.h"
#include <iostream>

using namespace std;



LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
}

/*
alternate constructor that creates a linked list of the size that is 
passed as an argument. All nodes in the list should be initialized to 
have a value of num.
*/
LinkedList::LinkedList(int size, int num)
{
	for (int i = 0; i < size; i++) {
		insert(i, num);
	}


}


LinkedList::~LinkedList()
{
}

void LinkedList::init()
{

}

void LinkedList::insert(int index, int num) {
	Node* newNode;
	int count = 0;
	if (index > getSize()) {
		cout << "invalid index!" << endl;
		return;
	}
	if (head == NULL) {
		newNode = new Node;
		newNode->next = NULL;
		newNode->value = num;
		head = newNode;
		tail = newNode;
	}
	if (head != NULL) {
		for (Node* temp = head; temp != NULL; temp = temp->next) {
			if (count == index) {
				newNode = new Node;
				newNode->value = num;
				newNode->next = NULL;
				
			}
			count++;
		}
	}
	
	/*
	newNode = new Node;
	newNode->value = num;
	tail->next = newNode;
	tail = tail->next;
	*/
}

int LinkedList::get(int index) {
	if (index > getSize()) {
		cout << "invalid index!" << endl;
		return;
	}
	int count = 0;
	if (head != NULL) {
		for (Node* temp = head; temp != NULL; temp = temp->next) {
			if (count == index) {
				return temp->value;
			}
		}
	}
	
}

void LinkedList::remove(int index) {
	if (index > getSize()) {
		cout << "invalid index!" << endl;
		return;
	}
	Node* temp = head;
	Node* temp2;
	if (index == 1) {
		head = temp->next;
		delete temp;
		return;
	}
	for (int i = 0; i < index - 2; i++) {
		temp = temp->next;
	}
	temp2 = temp->next; //This points to the node at index
	temp->next = temp2->next; //fixes link
	delete temp2;

}

int LinkedList::getSize() {
	int count = 0;
	for (Node* temp = head; temp != NULL; temp = temp->next) {
		count++;
	}
	return count;
}

void LinkedList::print() {
	for (Node* temp = head; temp != NULL; temp = temp->next) {
		cout << temp->value << endl;
	}
}

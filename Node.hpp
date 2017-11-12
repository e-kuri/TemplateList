#pragma once

template <class T>
class Node
{
private:

	Node *next;
	T* content;
	
public:
	Node(T* content);
	~Node();
	Node* getNext();
	void setNext(Node* next);
	T *getContent();

};


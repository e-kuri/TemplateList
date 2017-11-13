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
	T* getContent();

};

template <class T>
Node<T>::Node(T *content)
{
	this->content = content;
}

template <class T>
Node<T>::~Node()
{
}

template <class T>
Node<T>* Node<T>::getNext(){
	return this->next;
}

template <class T>
void Node<T>::setNext(Node* next){
	this->next = next;
}

template <class T>
T* Node<T>::getContent() {
	return this->content;
}



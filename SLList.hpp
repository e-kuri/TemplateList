#pragma once
#include "Node.hpp"

template <class T>
class SLList
{
protected:
	Node<T> *head;
	Node<T> *tail;
	int size;
	
public:
	SLList();
	~SLList();
	bool isEmpty(void);
	bool insertHead(T &content);
	bool removeHead(T &headcontent);
	bool insertTail(T &content);
	bool removeTail(T &tailcontent);
	T* get(int index);
	int getSize();
	Node<T> *getHead();
	Node<T> *getTail();
};

template<class T>
SLList<T>::SLList(){
	head = 0;
	tail = 0;
	size = 0;
}

template<class T>
SLList<T>::~SLList(){
	
}

template<class T>
bool SLList<T>::isEmpty(void){
	return size == 0;
}

template<class T>
bool SLList<T>::insertHead(T &content){
	Node<T> *node = new Node<T>(&content);
	if (node == 0){
		return false;
	}
	node->setNext(this->head);
	if (isEmpty()){
		tail = node;
	}
	head = node;
	size++;
	return true;
}

template<class T>
bool SLList<T>::removeHead(T &headcontent){
	if (isEmpty()){
		return false;
	}
	else {
		Node<T> *temp = head; 
		headcontent = *head->getContent();
		head = head->getNext();
		size--;
		if (size == 0){
			tail = 0;
		}
		delete temp;
		return true;
	}
}


template<class T>
bool SLList<T>::insertTail(T &content){
	Node<T> *node = new Node<T>(&content);
	if (node == 0){
		return false;
	}
	if (isEmpty()){
		head = tail = node;
	}
	else{
		tail->setNext(node);
		tail = node;
	}
	size++;
	return true;
}

template<class T>
bool SLList<T>::removeTail(T &tailcontent){
	if (isEmpty()){
		return false;
	}
	else{
		Node<T> *aux = tail;
		tailcontent = *tail->getContent();
		
		if(size==1){
			head = tail = 0;
			delete aux;
			size--;
			return true;
		}
		
		Node<T> *temp = head;
		for (int i=0;i<size-2;i++){
			temp = temp->getNext();
		}
		tail = temp;
		tail->setNext(0);
		delete aux;
		size--;
		return true;
	}
}

template<class T>
T* SLList<T>::get(int index){
	if(index >= size){
		return 0;
	}
	Node<T> *node = head;
	for (int i=0;i<index;i++){
		node = node->getNext();
	}
	return node->getContent();
}

template<class T>
int SLList<T>::getSize(){
	return size;
}

template<class T>
Node<T>* SLList<T>::getHead(){
	return head;
}

template<class T>
Node<T>* SLList<T>::getTail(){
	return tail;
}
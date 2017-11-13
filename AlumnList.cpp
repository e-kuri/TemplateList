#include "AlumnList.hpp"
#include "Alumn.hpp"

AlumnList::AlumnList()
{
	
}

AlumnList::~AlumnList()
{
}

bool AlumnList::addAlumn(Alumn& alumn){
	return insertTail(alumn);
}

bool AlumnList::setScore(int nocuenta, float score)
{
	Node<Alumn> *current = head;
	while (current != 0 && current->getContent()->getNoCuenta()!= nocuenta){
		current = current->getNext();
	}
	if (current == 0){
		return false;
	}
	current->getContent()->setScore(score);
	return true;
}

bool AlumnList::removeAlumn(Alumn&)
{
	
}

void AlumnList::print()
{
	
}

void AlumnList::printListbyScore()
{
	
}


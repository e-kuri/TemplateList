#include <iostream>
#include "Node.hpp"
#include "Alumn.hpp"
#include "SLList.hpp"


int main()
{
	Alumn alumno1("Dinorah",1111);
	Alumn alumno2("Ana",2222);
	Alumn alumno3("Luis",3333);
	Alumn alumno4("Eugenio",4444);
	alumno1.setScore(8);
	alumno2.setScore(9);
	alumno3.setScore(10);
	alumno4.setScore(10);

	
	SLList<Alumn> lista1;
	lista1.insertHead(alumno1);
	lista1.insertHead(alumno2);
	lista1.insertHead(alumno3);
	lista1.insertHead(alumno4);
	lista1.get(0)->print();
	lista1.get(1)->print();
	lista1.get(2)->print();
	lista1.get(3)->print();
	
	lista1.removeHead(alumno3);
	std::cout << "Tamaño de la lista: " << lista1.getSize() << endl;
	
	lista1.removeTail(alumno1);
	std::cout << "Tamaño de la lista: " << lista1.getSize() << endl;
	
	lista1.insertTail(alumno4);
	std::cout << "Tamaño de la lista: " << lista1.getSize() << endl;
	
	lista1.getHead();
	
	
}

#include "Node.hpp"
#include "Alumn.hpp"


int main()
{
	Alumn alumno1("Dinorah",1234);
	alumno1.print();
	
	Node node1(&alumno1);
	Alumn *alumno = node1.getAlumn();
	alumno->print();
}

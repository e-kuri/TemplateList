#pragma once
#include "SLList.hpp"
#include "Alumn.hpp"


class AlumnList: public SLList<Alumn>
{	
	public:
		AlumnList();
		~AlumnList();
		bool addAlumn(Alumn&);
		bool setScore(int,float); 
		bool removeAlumn(Alumn&); 
		void printListbyScore(); //Imprime la lista de alumnos por calif de mayor a menor
		void print();

};






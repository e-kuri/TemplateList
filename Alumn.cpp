#include "Alumn.hpp"
#include <iostream>

Alumn::Alumn(string name, int nocuenta)
{
	this->name = name;
	this->nocuenta = nocuenta;
}

Alumn::~Alumn()
{
}

string Alumn::getName(){
	return this->name;
}

int Alumn::getNoCuenta(){
	return this->nocuenta;
}

float Alumn::getScore(){
	return this->score;
}

void Alumn::setScore(float score)
{
	this->score = score;
}

void Alumn::print(){
	cout << "Nombre: " << name << "\n";
	cout << "Numero de cuenta: " << nocuenta << "\n";
	cout << "Calificacion: " << score << "\n";
}
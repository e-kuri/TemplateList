#pragma once
#include<string>
using namespace std;

class Alumn
{
private:
	string name;
	int nocuenta;
	float score;

public:
	Alumn(string name, int nocuenta);
	~Alumn();
	
	string getName();
	int getNoCuenta();
	float getScore();
	void setScore(float score);
	void print();

};


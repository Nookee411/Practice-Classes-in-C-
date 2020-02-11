#include <iostream>
#include "Vector2d.h"

int main()
{
	Vector2d a = {2, 5};
	Vector2d b = { 5,6 };
	a.print();
	a.setx(5);
	a.sety(10);
	a.print();
	b.print();
	a = a + b;
	std::cout << "A= ";
	a.print();
	std::cout << std::endl;
	std::cout <<"Scalar multiplection: "<< a.scalarMult(b)<<std::endl;
	std::cout <<"Tan:"<< a.angleTan(b) << std::endl;
}

#include<iostream>

#include "FullConnNN.hpp"

int main()
{
	FullConnNN* example = new FullConnNN();
	// example->weight_init();
	example->display();
	example->forward();

	return 0;
}
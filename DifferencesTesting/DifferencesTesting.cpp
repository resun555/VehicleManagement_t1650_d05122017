// DifferencesTesting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	DifferencesTesting * dt = new DifferencesTesting();
	delete dt;
	std::cin.get();
	system("cls");
	dt = (DifferencesTesting *)malloc(sizeof(DifferencesTesting));
	free(dt);
	std::cin.get();
    return 0;
}


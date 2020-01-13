#pragma once
#include <iostream>
#include <string>
class Burger
{
public:
	Burger();
	~Burger();

	int burgerNum = 1;

	std::string burgerNumAsString();
};


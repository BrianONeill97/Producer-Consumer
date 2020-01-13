#include "Consumer.h"
#include "Producer.h"

int main()
{

	std::thread create(cookingBurger);
	std::thread consume(eat);

	//Returns when thread execution has completed
	create.join(); 	
	consume.join();


}


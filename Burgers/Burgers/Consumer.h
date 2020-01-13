#pragma once
#include "Global.h"

void eat()
{
	while (true)
	{
		//waits for the producer
		std::unique_lock<std::mutex> clock(mut);
		m_condVar.wait(clock, [] { return ready; }); // waits until the main has sent that a burger is ready 

		while (!q.empty())
		{
			std::cout << " Eating Burger " << std::endl;
			q.pop();
			ready = false;

		}
	}
}

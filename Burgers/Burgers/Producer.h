#pragma once
#include "Global.h"

Burger m_burger;

void cookingBurger()
{
	for (int i = 1; i < 20; i++)
	{
		std::cout << "Cooking Burger Number: " << i << std::endl;
		q.push(m_burger);
		ready = true;
		m_condVar.notify_all(); // notifies all the threads that are waiting for this info.
		std::this_thread::sleep_for(std::chrono::seconds(2)); // for the time delay to show the burgers being eaten right after creation.
	}
}

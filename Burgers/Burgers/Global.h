#pragma once
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include "Burger.h"

std::mutex mut; // 
std::condition_variable m_condVar; //
std::queue<Burger> q; // Queue for the burger objects
static bool ready = false;
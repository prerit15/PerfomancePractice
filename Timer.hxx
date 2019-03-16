#pragma once
#include "stdafx.h"
#include <string>

#include <chrono> 
#include <iostream>
using namespace std;
using namespace std::chrono;

class Timer
{

public:
	Timer(const std::string &name);

	~Timer();
	std::string  functionName;
	steady_clock::time_point startTime;

};
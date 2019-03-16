
#include "pch.h"
#include "Timer.hxx"
#include <string>
#include <chrono> 
#include <iostream>
using namespace std;
using namespace std::chrono;


Timer::Timer(const string& functionName) : functionName(functionName)
{
	// GetSystemTime(&t1);    // Start timing
	startTime = high_resolution_clock::now();
}


Timer::~Timer()
{
	steady_clock::time_point stop = high_resolution_clock::now();
	//std::chrono::seconds chroneSeconds =duration_cast<seconds>(stop - startTime);
	std::cout << "Time take by function " << functionName.c_str() << " is " << duration_cast<seconds>(stop - startTime).count() << std::endl;
}

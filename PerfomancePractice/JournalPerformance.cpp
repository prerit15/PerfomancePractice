// PerfomancePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include "Trace.hxx"
#include "Timer.hxx"
#include <chrono> 
#include <iostream>

using namespace std::chrono; 
using namespace std;

int addOne1(int x)     // Version 1. Introducing a Trace object
{
    const char  *name = "addOne";
    Trace1 t1(name);

    return x+1;

}

int addOne(int x)     // Version 1. Introducing a Trace object
{
    string name = "addOne";
    Trace t(name);

    return x+1;
}



int main()
{
	std::cout<<"Enter to continue12"<<std::endl;
	getchar();
	{
		Trace::traceIsActive = false;//Turn tracing off
		//...
		Timer t("Trace");
		int j= 1000000;
		int y = 0 ;
		for(int i =0; i < j; i++) {
			y = addOne(i);
		}
		
	}
	{
		Trace::traceIsActive = false;//Turn tracing off
		//...
		// GetSystemTime(&t1);    // Start timing
		Timer t("Trace1");
		int j= 1000000;
		int y = 0 ;
		for(int i =0; i < j; i++) {
			y = addOne1(i);
		}
	}
	return 0;
}


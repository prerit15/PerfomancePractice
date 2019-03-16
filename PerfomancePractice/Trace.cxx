#include "pch.h"
#include "Trace.hxx"
#include <string>
#include <iostream>
using namespace std;

bool Trace::traceIsActive = false;
bool Trace1::traceIsActive = false;

Trace::Trace(const string& functionName) : theFunctionName(functionName)
{
	if (traceIsActive)
	{
		cout << "Enter function" << functionName << endl;
	}
}


Trace1::Trace1(const char* functionName) : theFunctionName(0)
{
	if (traceIsActive)
	{
		theFunctionName = new string(functionName);
	}
}

void Trace::debug(const string &msg)
{
	if (traceIsActive)
	{
		cout << msg << endl;
	}
}

void Trace1::debug(const char * msg)
{
	if (traceIsActive)
	{
		cout << msg << endl;
		delete theFunctionName;
	}
}



Trace::~Trace()
{
	if (traceIsActive) {
		cout << "Exit function " << theFunctionName << endl;
	}
}


Trace1::~Trace1()
{
	if (traceIsActive) {
		cout << "Exit function " << theFunctionName << endl;
	}
}



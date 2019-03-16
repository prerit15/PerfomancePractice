#pragma once

#include "pch.h"
#include <string>


using namespace std;
class Trace {
public:
	Trace(const string &name);
	~Trace();
	void debug(const string &msg);

	static bool traceIsActive;
private:
	string theFunctionName;
};


class Trace1 {
public:
	Trace1(const char* name);
	~Trace1();
	void debug(const char* msg);

	static bool traceIsActive;
private:
	string* theFunctionName;
};


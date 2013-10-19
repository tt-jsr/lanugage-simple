// simple.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

extern "C" void Parse(const char *);

int _tmain(int argc, _TCHAR* argv[])
{
    Parse("sample.script");
	return 0;
}


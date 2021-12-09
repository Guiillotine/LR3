#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

template <class T> class Compare
{
public:
	Compare()
	{

	}
	bool Max(T a, T b)
	{
		if (a > b) return (1);
		else return (0);
	}
	bool Min(T a, T b)
	{
		if (a < b) return (1);
		else return (0);
	}
};

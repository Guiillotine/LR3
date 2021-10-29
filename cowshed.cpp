#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string>
using namespace std;

class Cowshed
{
public:
	Cowshed(){}
	~Cowshed(){}
	void Set(int length, int width, int height)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}
	void Print()
	{
		cout << "\n Длина короника:" << length << "\n Ширина короника:" << width << "\n Высота короника:" << height;
	}
	Cowshed& operator ++()
	{
		this->length++;
		return *this;
	}
	Cowshed& operator ++(int value)
	{
		Cowshed temp = *this;
		this->length++;
		return temp;
	}
private:
	int length = 500;
	int width = 500;
	int height = 3;
};
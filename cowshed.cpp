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
	Cowshed()
	{
		length = 200;
		width = 200;
		height = 6;
		KolVoCowshed++;
	}
	Cowshed(int length)
	{
		width = 200;
		height = 6;
		KolVoCowshed++;
	}
	Cowshed(bool zanyatMest[])
	{
	for (int i = 0; i < 10; i++)
		this->zanyatMest[i] = zanyatMest[i];
	length = 200;
	width = 200;
	height = 6;
	KolVoCowshed++;
	}
	Cowshed(int length, int width, int height)
	{
		this->length = length;
		this->width = width;
		this->height = height;
		KolVoCowshed++;
	}
	~Cowshed()
	{
	}
	void Set(int length, int width, int height)
	{
		try
		{
			this->length = length;
			if (length < 0) throw exception("\n Ошибка. Длина не может быть отрицательной\n");
			if (length == 0) throw exception("\n Ошибка. Длина не может быть равна нулю\n");
		}
		catch (exception& ex)
		{
			cout << ex.what();
			this->length = 200;
			cout << "\n Коровнику присвоена усреднённая длина 200 м\n";
		}
		try
		{
			this->width = width;
			if (width < 0) throw exception("\n Ошибка. Ширина не может быть отрицательной\n");
			if (width == 0) throw exception("\n Ошибка. Ширина не может быть равна нулю\n");
		}
		catch (exception& ex)
		{
			cout << ex.what();
			this->width = 200;
			cout << "\n Коровнику присвоена усреднённая ширина 200 м\n";
		}
		try
		{
			this->height = height;
			if (height < 0) throw exception("\n Ошибка. Высота не может быть отрицательной\n");
			if (height == 0) throw exception("\n Ошибка. Высота не может быть равна нулю\n");
		}
		catch (exception& ex)
		{
			cout << ex.what();
			this->height = 6;
			cout << "\n Коровнику присвоена усреднённая высота 6 м\n";
		}
	}
	void Print()
	{
		cout << "\n Длина коровника:" << length << "\n Ширина коровника:" << width << "\n Высота коровника:" << height;
	}
	Cowshed& operator ++()
	{
		length++;
		return *this;
	}
	Cowshed& operator ++(int value)
	{
		Cowshed temp = *this;
		length++;
		return temp;
	}
	static int GetKolVo()
	{
		return KolVoCowshed;
	}
	void PrintZanyatMest()
	{
		cout << "\n 1 - место занято коровой\n 0 - место свободно\n Наполненность коровника следующая:\n";
		for (int i = 0; i < 10; i++)  cout << " " << zanyatMest[i];
	}
//private:
protected:
	static int KolVoCowshed;
	int length;
	int width;
	int height;
	bool zanyatMest[10] = {0}; //10 мест. Место занято коровой - 1, не занято - 0. 
};

int Cowshed::KolVoCowshed = 0;
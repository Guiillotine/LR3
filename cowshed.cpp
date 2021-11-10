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
		cout << "\n *Запуск конструктора без параметров класса Cowshed*\n";
		length = 500;
		width = 500;
		height = 3;
		KolVoCowshed++;
	}
	Cowshed(int length)
	{
		cout << "\n *Запуск конструктора c одним параметром класса Cowshed*\n";
		width = 500;
		height = 3;
		KolVoCowshed++;
	}
	Cowshed(bool zanyatMest[])
	{
	cout << "\n *Запуск конструктора c одним параметром класса Cowshed*\n";
	for (int i = 0; i < 10; i++)
		this->zanyatMest[i] = zanyatMest[i];
	length = 500;
	width = 500;
	height = 3;
	KolVoCowshed++;
	}
	Cowshed(int length, int width, int height)
	{
		cout << "\n *Запуск конструктора c тремя параметрами класса Cowshed*\n";
		this->length = length;
		this->width = width;
		this->height = height;
		KolVoCowshed++;
	}
	~Cowshed()
	{
		cout << "\n *Запуск деструктора класса Cowshed*\n";
	}
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
private:
	static int KolVoCowshed;
	int length;
	int width;
	int height;
	bool zanyatMest[10] = {0}; //10 мест. Место занято коровой - 1, не занято - 0. 
};

int Cowshed::KolVoCowshed = 0;
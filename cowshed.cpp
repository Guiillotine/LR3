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
private:
	static int KolVoCowshed;
	int length;
	int width;
	int height;
};

int Cowshed::KolVoCowshed = 0;
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

class Building
{
public:
	Building()
	{
		length = 50;
		width = 50;
		height = 6;
		kolVoFloor = 2;
	}
	Building(int length, int width, int height, int kolVoFloor)
	{
		this->length = length;
		this->width = width;
		this->height = height;
		this->kolVoFloor = kolVoFloor;
	}
	~Building()
	{
	}
	friend void operator << (ostream& o, Building r)
	{
		cout << "\n Длина здания: " << r.length << "\n Ширина здания: " << r.width << "\n Высота здания: " << r.height << "\n Количество этажей: " << r.kolVoFloor;
	}
	friend Building operator >> (istream& i, Building& r)
	{
		cin >> r.length >> r.width >> r.height >> r.kolVoFloor;
		return r;
	}
	void Set(int length, int width, int height, int kolVoFloor)
	{
		this->length = length;
		this->width = width;
		this->height = height;
		this->kolVoFloor = kolVoFloor;
	}
	int Getlength()
	{
		return length;
	}
	int Getwidth()
	{
		return width;
	}
	int Getheight()
	{
		return height;
	}
	int GetkolVoFloor()
	{
		return kolVoFloor;
	}
	virtual void Print()
	{
		cout << "\n Длина здания: " << length << "\n Ширина здания: " << width << "\n Высота здания: " << height << "\n Количество этажей: " << kolVoFloor;
	}
	int GetFloorS()
	{
		return length * width;
	}
protected:
	int length;
	int width;
	int height;
	int kolVoFloor;
};


class Garage : public Building
{
public:
	Garage() : Building(20, 15, 3, 1)
	{		
		kolVoCars = 15;
	}
	Garage(int length, int width, int height, int kolVoFloor, int kolVoCars) : Building(length, width, height, kolVoFloor)
	{
		this->kolVoCars = kolVoCars;
	}
	void  operator =(Building b)
	{
		this->length = b.Getlength();
		this->width = b.Getwidth();
		this->height = b.Getheight();
		this->kolVoFloor = b.GetkolVoFloor();
		this->kolVoCars = 0;
	}
	friend void operator << (ostream& o, Garage r)
	{
		cout << "\n Длина гаража: " << r.length << "\n Ширина гаража: " << r.width << "\n Высота гаража: " << r.height << "\n Количество этажей: " << r.kolVoFloor << "\n Количество машиномест: " << r.kolVoCars;
	}
	friend Building operator >> (istream& i, Garage& r)
	{
		cin >> r.length >> r.width >> r.height >> r.kolVoFloor >> r.kolVoCars;
		return r;
	}
	void Set(int length, int width, int height, int kolVoFloor, int kolVoCars)
	{
		Building::Set(length, width, height, kolVoFloor);
		this->kolVoCars = kolVoCars;
	}
	void Print() override
	{
		cout << "\n Длина гаража: " << length << "\n Ширина гаража: " << width << "\n Высота гаража: " << height << "\n Количество этажей: " << kolVoFloor << "\n Количество машиномест: " << kolVoCars;
	}
private:
	int kolVoCars;
};
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
	void Set(int length, int width, int height, int kolVoFloor)
	{
		this->length = length;
		this->width = width;
		this->height = height;
		this->kolVoFloor = kolVoFloor;
	}
	/*virtual void Print()
	{
		cout << "\n Длина здания: " << length << "\n Ширина здания: " << width << "\n Высота здания: " << height;
	}*/
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
	Garage()
	{
		kolVoCars = 15;
	}
	Garage(int length, int width, int height, int kolVoFloor, int kolVoCars) : Building(length, width, height, kolVoFloor)
	{
		this->kolVoCars = kolVoCars;
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
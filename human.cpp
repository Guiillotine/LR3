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

class Human
{
public:
	Human()
	{

	}
	Human(int name, int surname, int age, int sex)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->sex = sex;
	}
	~Human()
	{
	}
	void Set(int name, int surname, int age, int sex)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->sex = sex;
	}
	virtual void Print()
	{
		cout << "\n Имя: " << name << "\n Фамилия: " << surname << "\n Возраст: " << age << "\n Пол: " << sex;
	}

protected:
	string name;
	string surname;
	int age;
	int sex;
};
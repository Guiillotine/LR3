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

class Worker
{
public:
	Worker()
	{
	}
	Worker(string name, string surname, int age, char sex, int oklad)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->sex = sex;
		this->oklad = oklad;
	}
	~Worker()
	{
	}
	virtual void Print()
	{
		cout << "\n Имя: " << name << "\n Фамилия: " << surname << "\n Возраст: " << age << "\n Пол: " << sex << "\n Оклад: " << oklad;
	}
	virtual int ZarPlat() = 0;

protected:
	string name;
	string surname;
	int age;
	char sex;
	int oklad;
};


class Cleaner : public Worker
{
public:
	Cleaner()
	{
	}
	Cleaner(string name, string surname, int age, char sex, int okla) : Worker(name, surname, age, sex, oklad)
	{
	}
	~Cleaner()
	{
	}
	virtual void Print()
	{
		cout << "\n Имя: " << name << "\n Фамилия: " << surname << "\n Возраст: " << age << "\n Пол: " << sex << "\n Оклад: " << sex << "\n Оклад: " << oklad << "\n Районный коэффициент: " << rayKoef << "\n Премия: " << prem;
	}
	int ZarPlat()
	{
		return(oklad + oklad * rayKoef / 100 + oklad * prem / 100);
	}

private:
	int rayKoef = 15;
	int prem = 20;
};
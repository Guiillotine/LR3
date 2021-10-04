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
#include "food.h"
using namespace std;

class cow
{
public:
	cow(); //  конструктор
	~cow();//  деструктор
	void set(char name[], char breed[], int age, double weight, int nadoi);
	void set_new_cow(list_food &sp_food1);//Функция инициализации элементов данных
	void inc_age(); //Увеличить возраст
	void get_print_cow(); //Вывод на экран информации об одной корове
	void print_udder(); //Печать параметров вымени для коровы
	void set_udder(double length, double width, double girth, double depth); //Ввод параметров вымени длина, ширина, обхват, глубина 
	void set_udder(); //Заполнение полей из консоли
	double volume_udder(); //Возвращает значение объёма вымени
private:
	class Udder
	{
	public:
		Udder()
		{
			this->length = 0.39;
			this->width = 0.43;
			this->girth = 0.47;
			this->depth = 0.56;
		}
		~Udder()
		{
		}
		double length;//длина
		double width; //ширина
		double girth; //обхват
		double depth; //глубина
	};
	Udder udder;
	char name[50];
	char breed[100]; //порода
	food food;
	int age;
	double weight;
	int nadoi; //Надой
};


////////////////////////////////////////////////////////////////////////////////
class list_cow
{
public:
	list_cow(); //  конструктор
	~list_cow();//  деструктор
	void add(cow cow1); //Функция инициализации элементов данных
	//cow ret(cow cow1); //Функция возврата элементов данных
	void arr_inc(); //Функция увеличения размера массива
	void get_print_list();
	void inc_age_sp(); //Увеличение возраста коровы на 1 год
	int num_sp(); //Возвращает количество коров в списке

private:
	int num = 0;
	cow* arr_cow = new cow[1];
};

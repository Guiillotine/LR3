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

class warehouse
{
public:
	warehouse(); //  конструктор
	~warehouse();//  деструктор
	void set_new_warehouse(); //Функция инициализации элементов данных
	void get_print_warehouse(); //Вывод на экран информации об одной корове
	void get(warehouse warehouse1);

private:
	int S;//Площадь
	int kol_bags; //Вместимость (в мешках)
	double price; //Стоимость скалада
	double exp; //Ежемесячные затраты на обслуживание
};

/////////////////////////////////////////////////////////////////////////////////////
class list_warehouse
{
public:
	list_warehouse(); //  конструктор
	~list_warehouse();//  деструктор
	void add(warehouse warehouse1); //Функция инициализации элементов данных
	//warehouse ret(int numb); //Функция возврата строки
	void arr_inc(); //Функция увеличения размера массива
	void get_print_list();
	int num_sp(); //Возвращает количество складов в списке
	void sell();

private:
	int num = 0;
	warehouse* arr_warehouse = new warehouse[1];
};

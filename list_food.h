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

class list_food
{
public:
	list_food(); //  конструктор
	~list_food();//  деструктор
	void add(food food1); //Функция инициализации элементов данных
	food ret(food food1); //Функция возврата элементов данных
	void arr_inc(); //Функция увеличения размера массива
	void get_print_list();
	int num_sp(); //Возвращает количество кормов в списке
	food one_food(int i);

private:
	int num = 0;
	food* arr_food = new food[1];
};

list_food::list_food()
{
	num = 0;
}

list_food::~list_food()
{

}

void list_food::add(food food1)
{
	if (num > 0) this->arr_inc(); // увеличение размера динамического массива
	*(arr_food + num) = food1;
	num++; //Количество кормов в списке
}

food list_food::ret(food food1)
{
	return (*(arr_food + num - 1));
}

void list_food::get_print_list()
{
	food food2;
	for (int i = 0; i < num; i++)
	{
		cout << "\n № " << i + 1;
		food2 = *(arr_food + i);
		food2.get_print_food();
	}
}

void list_food::arr_inc()
{
	food* arr_food2 = new food[num];

	for (int i = 0; i < num; i++) *(arr_food2 + i) = *(arr_food + i);
	delete [] arr_food;
	arr_food = new food[num + 1];
	for (int i = 0; i < num; i++) *(arr_food + i) = *(arr_food2 + i);
	delete [] arr_food2;

}

int list_food::num_sp()
{
	return(num);
}

food list_food::one_food(int i)
{
	return(*(arr_food + i));
}
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

food::food()
{
	strcpy(name,"Сено");
	strcpy(company, "КормАн");
	price = 500;
}

food::~food()
{

}

void food::set(char name[], char company[], double price) //Если введённый параметр равен нулю (пробелу для char) - пропустить его
{
	if (strcmp(name, " ")) strcpy(this->name, name);
	if (strcmp(company, " ")) strcpy(this->company, company);
	if (price) this->price = price;
}

void food::set_new_food()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	//system("cls");
	printf("\n Добавление нового корма\n ");
	for (int i = 0; i < 23; i++) printf("-");
	printf("\n\n Введите название корма: ");
	cin >> name;  name[strlen(name)] = '\0';

	printf("\n Введите фирму-производителя корма: ");
	cin >> company;
	printf("\n Введите цену корма (в рублях): ");
	cin >> price;
	while (getchar() != '\n');
}

void food::get_print_food()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	printf("\n НАЗВАНИЕ: %s\n ФИРМА: %s\n ЦЕНА(в рублях): %.3f\n\n", name, company, price);
}

string food::food_name()
{
	return(name);
}


/////////////////////////////////////////////////////////////////////////////////////////////
list_food::list_food()
{
	num = 0;
}

list_food::~list_food()
{
	delete[] arr_food;
}

void list_food::add(food food1)
{
	if (num > 0) this->arr_inc(); // увеличение размера динамического массива
	*(arr_food + num) = food1;
	num++; //Количество кормов в списке
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
	food* arr_food2 = new food[num+1];
	for (int i = 0; i < num; i++) *(arr_food2 + i) = *(arr_food + i);
	delete [] arr_food;
	arr_food = arr_food2;

}

int list_food::num_sp()
{
	return(num);
}

food list_food::one_food(int i)
{
	return(*(arr_food + i));
}
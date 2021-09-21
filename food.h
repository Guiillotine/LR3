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

class food
{
public:
	food(); //  конструктор
	~food();//  деструктор
	void new_food(); //Функция инициализации элементов данных
	void get(food food1); //Функция возврата элементов данных
	void print_food(); //Вывод на экран информации об одной корове
	string food_name(); //Возвращает название корма

private:
	char name[50];
	char company[70]; //порода
	double price;
};

food::food()
{
	strcpy(name,"");
	strcpy(company, "");
	price = 0;
}

food::~food()
{

}

void food::new_food()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	//system("cls");
	printf("\n\n Добавление нового корма\n ");
	for (int i = 0; i < 23; i++) printf("-");
	printf("\n Введите название корма: ");
	cin >> name;  name[strlen(name)] = '\0';

	printf("\n Введите фирму-производителя корма: ");
	cin >> company;
	printf("\n Введите цену корма (в рублях): ");
	cin >> price;
	while (getchar() != '\n');
}

void food::get(food food1)
{
	strcpy(food1.name, name);
	strcpy(food1.company, company);
	food1.price = price;
}

void food::print_food()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	printf("\n НАЗВАНИЕ: %s\n ФИРМА: %s\n ЦЕНА(в рублях): %.3f\n\n", name, company, price);
}

string food::food_name()
{
	return(name);
}

class list_food
{
public:
	list_food(); //  конструктор
	~list_food();//  деструктор
	void add(food food1); //Функция инициализации элементов данных
	food ret(food food1); //Функция возврата элементов данных
	void arr_inc(); //Функция увеличения размера массива
	void print_list();
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

void list_food::print_list()
{
	food food2;
	for (int i = 0; i < num; i++)
	{
		cout << "\n № " << i + 1;
		food2 = *(arr_food + i);
		food2.print_food();
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
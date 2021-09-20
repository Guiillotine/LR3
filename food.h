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
	printf("\n Добавление нового корма\n ");
	for (int i = 0; i < 23; i++) printf("-");
	printf("\n Введите название корма: ");
	cin >> name;

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

/*
class list_cow
{
public:
	list_cow(); //  конструктор
	~list_cow();//  деструктор
	void add(cow cow1); //Функция инициализации элементов данных
	cow get(cow cow1); //Функция возврата элементов данных
	void arr_inc(); //Функция увеличения размера массива
	void print_list();
	void inc_age_sp(); //Увеличение возраста коровы на 1 год

private:
	int num = 0;
	cow* arr_cow = new cow[1];
};

list_cow::list_cow()
{
	num = 0;
}

list_cow::~list_cow()
{

}

void list_cow::add(cow cow1)
{
	if (num > 0) this->arr_inc(); // увеличение размера динамического массива
	*(arr_cow + num) = cow1;
	num++; //Количество коров в списке
}

cow list_cow::get(cow cow1)
{
	return (*(arr_cow + num - 1));
}

void list_cow::print_list()
{
	cow cow2;
	for (int i = 0; i < num; i++)
	{
		cout << "\n № " << i + 1;
		cow2 = *(arr_cow + i);
		cow2.print_cow();
	}
}

void list_cow::arr_inc()
{
	cow* arr_cow2 = new cow[num];

	for (int i = 0; i < num; i++) *(arr_cow2 + i) = *(arr_cow + i);
	delete [] arr_cow;
	arr_cow = new cow[num + 1];
	for (int i = 0; i < num; i++) *(arr_cow + i) = *(arr_cow2 + i);
	delete [] arr_cow2;

}

void list_cow::inc_age_sp()
{
	int a;
	system("cls");
	this->print_list();
	cout << "\n Увеличение возраста коровы на один год \n --------------------------------------\n";
	cout << "\n Введите номер коровы в списке, возраст которой нужно увеличить: ";
	cin >> a;
	(arr_cow + a - 1)->inc_age();
	cout << "\n Возраст коровы № " << a << " изменён:\n";
	(arr_cow + a - 1)->print_cow();
}*/

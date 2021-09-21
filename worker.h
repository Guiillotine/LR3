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

class worker
{
public:
	worker(); //  конструктор
	~worker();//  деструктор
	void new_worker(); //Функция инициализации элементов данных
	void get(worker worker1); //Функция возврата элементов данных
	void print_worker(); //Вывод на экран информации об одной корове
	void change_stat(int a); //Изменить статус работника

private:
	char fio[100];
	int year; //Год рождения
	char prof[100]; //Профессия
	char stat[10]; //в норме/ болеет/ в отпуске
	double pay; //оклад
};

worker::worker()
{
	strcpy(fio,"");
	strcpy(prof, "");
	strcpy(stat, "");
	year = 0;
	pay = 0;
}

worker::~worker()
{

}

void worker::new_worker()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	//system("cls");
	printf("\n Добавление нового сотрудника\n ");
	for (int i = 0; i < 28; i++) printf("-");
	printf("\n\n Укажите ФИО сотрудника: ");
	gets_s(fio);

	printf("\n Укажите год рождения сотрудника: ");
	cin >> year; while (getchar() != '\n');

	printf("\n Укажите должность сотрудника: ");
	gets_s(prof);

	printf("\n Укажите оклад сотрудника(в рублях): ");
	cin >> pay;

	strcpy(stat, "В норме");
	while (getchar() != '\n');
}

void worker::get(worker worker1)
{
	strcpy(worker1.fio, fio);
	strcpy(worker1.prof, prof);
	strcpy(stat, "В норме");
	worker1.year = year;
	worker1.pay = pay;
}

void worker::print_worker()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	printf("\n ФИО СОТРУДНИКА: %s\n ГОД РОЖДЕНИЯ СОТРУДНИКА: %d\n ДОЛЖНОСТЬ: %s\n ОКЛАД (в рублях): %.3f\n СТАТУС: %s\n\n", fio, year, prof, pay, stat);
}


void worker::change_stat(int a)
{
	switch (a)
	{
	case 1:
		strcpy(stat, "В норме");
		break;
	case 2:
		strcpy(stat, "Болеет");
		break;
	case 3:
		strcpy(stat, "В отпуске");
		break;
	}
}











class list_worker
{
public:
	list_worker(); //  конструктор
	~list_worker();//  деструктор
	void add(worker worker1); //Функция инициализации элементов данных
	worker ret(int numb); //Функция возврата строки
	void arr_inc(); //Функция увеличения размера массива
	void print_list();
	int num_sp(); //Возвращает количество сотрудников в списке
	void change_stat(); //Изменение статуса сотрудника

private:
	int num = 0;
	worker* arr_worker = new worker[1];
};

list_worker::list_worker()
{
	num = 0;
}

list_worker::~list_worker()
{

}

void list_worker::add(worker worker1)
{
	if (num > 0) this->arr_inc(); // увеличение размера динамического массива
	*(arr_worker + num) = worker1;
	num++; //Количество сотрудников в списке
}

worker list_worker::ret(int numb)
{
	return (*(arr_worker + numb - 1));
}

void list_worker::print_list()
{
	worker worker2;
	for (int i = 0; i < num; i++)
	{
		cout << "\n № " << i + 1;
		worker2 = *(arr_worker + i);
		worker2.print_worker();
	}
}

void list_worker::arr_inc()
{
	worker* arr_worker2 = new worker[num];

	for (int i = 0; i < num; i++) *(arr_worker2 + i) = *(arr_worker + i);
	delete [] arr_worker;
	arr_worker = new worker[num + 1];
	for (int i = 0; i < num; i++) *(arr_worker + i) = *(arr_worker2 + i);
	delete [] arr_worker2;

}

int list_worker::num_sp()
{
	return(num);
}

void list_worker::change_stat()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	//system("cls");
	int a, numb = 0;
	this->print_list();
	do
	{
		printf("\n Изменение статуса сотрудника\n Введите номер сотрудника, статус которого следует изменить: ");
		cin >> numb;
	} while ((numb < 1) || (numb > num));
	do
	{
		printf("\n\n 1->В норме\n 2->Болеет\n 3->В отпуске\n\n Введите номер нового статуса: ");
		std::cin >> a;
	} while ((a < 1) || (a > 3));
	arr_worker[numb - 1].change_stat(a);
}
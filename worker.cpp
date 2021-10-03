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
#include "worker.h"
using namespace std;

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

void worker::set_new_worker()
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

void worker::get_print_worker()
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


/////////////////////////////////////////////////////////////////////////////////////

list_worker::list_worker()
{
	num = 0;
}

list_worker::~list_worker()
{
	delete[] arr_worker;
}

void list_worker::add(worker worker1)
{
	if (num > 0) this->arr_inc(); // увеличение размера динамического массива
	*(arr_worker + num) = worker1;
	num++; //Количество сотрудников в списке
}

/*worker list_worker::ret(int numb)
{
	return (*(arr_worker + numb - 1));
}*/

void list_worker::get_print_list()
{
	worker worker2;
	for (int i = 0; i < num; i++)
	{
		cout << "\n № " << i + 1;
		worker2 = *(arr_worker + i);
		worker2.get_print_worker();
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
	this->get_print_list();
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
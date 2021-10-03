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
#include "warehouse.h"
using namespace std;

warehouse::warehouse()
{
	S = 500;
	kol_bags = 1000;
	price = 0;
	exp = 0;
}

warehouse::~warehouse()
{

}

void warehouse::set_new_warehouse()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	//system("cls");
	printf("\n Добавление нового склада\n ");
	for (int i = 0; i < 24; i++) printf("-");
	printf("\n\n Укажите площадь склада(м^2): ");
	cin >> S;

	printf("\n Укажите вместимость склада (количество мешков): ");
	cin >> kol_bags;

	printf("\n Укажите стоимость склада (в рублях): ");
	cin >> price;

	printf("\n Укажите ежемесячные затраты на обслуживание (в рублях): ");
	cin >> exp;

	while (getchar() != '\n');
}

void warehouse::get(warehouse warehouse1)
{
	warehouse1.S = S;
	warehouse1.kol_bags = kol_bags;
	warehouse1.price = price;
	warehouse1.exp = exp;
}

void warehouse::get_print_warehouse()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	printf("\n ПЛОЩАДЬ СКЛАДА(м^2): %d\n ВМЕСТИМОСТЬ СКЛАДА(количество мешков): %d\n СТОИМОСТЬ склада(в рублях): %.3f\n ЕЖЕМЕСЯЧНЫЕ ЗАТРАТЫ НА ОБСЛУЖИВАНИЕ(в рублях): %.3f\n\n", S, kol_bags, price, exp);
}


/////////////////////////////////////////////////////////////////////////////////////

list_warehouse::list_warehouse()
{
	num = 0;
}

list_warehouse::~list_warehouse()
{
	delete[] arr_warehouse;
}

void list_warehouse::add(warehouse warehouse1)
{
	if (num > 0) this->arr_inc(); // увеличение размера динамического массива
	*(arr_warehouse + num) = warehouse1;
	num++; //Количество складов в списке
}

/*warehouse list_warehouse::ret(int numb)
{
	return (*(arr_warehouse + numb - 1));
}*/

void list_warehouse::get_print_list()
{
	warehouse warehouse2;
	for (int i = 0; i < num; i++)
	{
		cout << "\n № " << i + 1;
		warehouse2 = *(arr_warehouse + i);
		warehouse2.get_print_warehouse();
	}
}

void list_warehouse::arr_inc()
{
	warehouse* arr_warehouse2 = new warehouse[num+1];
	for (int i = 0; i < num; i++) *(arr_warehouse2 + i) = *(arr_warehouse + i);
	delete[] arr_warehouse;
	arr_warehouse = arr_warehouse2;
}

int list_warehouse::num_sp()
{
	return(num);
}

void list_warehouse::sell()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	//system("cls");
	int numb = 0;
	this->get_print_list();		
	do
	{
		printf("\n Продажа склада\n Введите номер склада, чтобы продать его: ");
		std::cin >> numb;
	} while ((numb < 1) || (numb > num));
	printf("\n Склад №%d продан\n", numb);

	for (int i = numb - 1; i < num - 1; i++) arr_warehouse[i] = arr_warehouse[i + 1];
	num--;
}

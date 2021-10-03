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
#include "cow.h"
using namespace std;

cow::cow()
{
	strcpy(name,"Бурёнка");
	strcpy(breed, "Черно-пестрая");
	age = 4;
	weight = 400;
	nadoi = 15;
}

cow::~cow()
{

}

void cow::set(char name[], char breed[], int age, double weight, int nadoi)
{
	if(strcmp(name, " ")) strcpy(this->name, name);
	if (strcmp(breed, " ")) strcpy(this->breed, breed);
	if (age) this->age = age;
	if (weight) this->weight = weight;
	if (nadoi) this->nadoi = nadoi;
}

void cow::set_new_cow(list_food &sp_food1)
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	int a, b;
	//system("cls");
	printf("\n Добавление новой коровы\n ");
	for (int i = 0; i < 23; i++) printf("-");

	printf("\n\n Введите кличку коровы: ");
	gets_s(name);

	printf("\n Введите породу коровы: ");
	gets_s(breed); //gets_s для ввода с пробелами

	printf("\n Выберите корм для коровы: ");
	for (int i = 0; i < sp_food1.num_sp(); i++)
		cout << "\n " << i + 1 << "->" << sp_food1.one_food(i).food_name();
	printf("\n ");
	std::cin >> a;
	while (getchar() != '\n');

	for (int i = 0; i < sp_food1.num_sp(); i++)
		if (a == (i + 1))
		{
			food = sp_food1.one_food(i);
		}

	printf("\n Введите возраст коровы (лет): ");
	cin >> age;

	printf("\n Введите вес коровы (кг): ");
	cin >> weight;

	printf("\n Введите надой коровы (л/сут): ");
	cin >> nadoi;

	while (getchar() != '\n');

}


void cow::get_print_cow()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	cout << "\n ИМЯ: " << name << "\n ПОРОДА: " << breed << "\n КОРМ: " << food.food_name() << "\n ВОЗРАСТ(лет): " << age << "\n ВЕС(кг): " << weight << "\n НАДОЙ(л/день): " << nadoi << endl;
	//food.food_name();
	//cout << "\n ВОЗРАСТ(лет): " << age << "\n ВЕС(кг): " << weight << "\n НАДОЙ(л/день): " << nadoi << endl;
}


void cow::inc_age()
{
	age++;
}

void cow::print_udder()
{
	printf("\n Параметры вымени для этой коровы:\n\n ДЛИНА: %.2f М\n ШИРИНА: %.2f М\n ОБХВАТ: %.2f М\n", udder.length, udder.width, udder.girth);
}

void cow::set_udder(double length, double width, double girth)
{
	udder.length = length;
	udder.width = width;
	udder.girth = girth;
}



////////////////////////////////////////////////////////////////////////////////
list_cow::list_cow()
{
	num = 0;
}

list_cow::~list_cow()
{
	delete[] arr_cow;
}

void list_cow::add(cow cow1)
{
	if (num > 0) this->arr_inc(); // увеличение размера динамического массива
	*(arr_cow + num) = cow1;
	num++; //Количество коров в списке
}


void list_cow::get_print_list()
{
	cow cow2;
	for (int i = 0; i < num; i++)
	{
		cout << "\n № " << i + 1;
		cow2 = *(arr_cow + i);
		cow2.get_print_cow();
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
	this->get_print_list();
	cout << "\n Увеличение возраста коровы на один год \n --------------------------------------\n";
	cout << "\n Введите номер коровы в списке, возраст которой нужно увеличить: ";
	cin >> a;
	(arr_cow + a - 1)->inc_age();
	cout << "\n Возраст коровы № " << a << " изменён:\n";
	(arr_cow + a - 1)->get_print_cow();
	while (getchar() != '\n');
}

int list_cow::num_sp()
{
	return(num);
}



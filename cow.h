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
	void new_cow(list_food sp_food1); //Функция инициализации элементов данных
	void get(cow cow1); //Функция возврата элементов данных
	void inc_age(); //Увеличить возраст
	void print_cow(); //Вывод на экран информации об одной корове

private:
	//int id;
	char name[50];
	char breed[100]; //порода
	char food[50];
	int age;
	double weight;
	int nadoi; //Надой
};

cow::cow()
{
	//id = 0;
	strcpy(name,"");
	strcpy(breed, "");
	strcpy(food, "");
	age = 0;
	weight = 0;
	nadoi = 0;
}

cow::~cow()
{

}

//void cow::set(int id0, char name0[], char breed0[], char food0[], int age0, int weight0, int nadoi0)
void cow::new_cow(list_food sp_food1)
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	int a, b;
	//system("cls");
	printf("\n Добавление новой коровы\n ");
	for (int i = 0; i < 23; i++) printf("-");
	printf("\n");

	printf("\n Введите кличку коровы: ");
	gets_s(name);

	printf("\n Введите породу коровы: ");
	gets_s(breed); //gets_s для ввода с пробелами


	printf("\n Выберите корм для коровы: ");
	for (int i = 0; i < sp_food1.num_sp(); i++)
		cout << "\n " << i + 1 << "->" << sp_food1.one_food(i).food_name();
	printf("\n ");
	std::cin >> a; b = sp_food1.one_food(a - 1).food_name().size();
	while (getchar() != '\n');
	int k = 0;
	for (int i = 0; i < sp_food1.num_sp(); i++)
		if (a == (i + 1))
		{
			for (k = 0; (sp_food1.one_food(a - 1).food_name())[k] != '\0'; k++)
				food[k] = (sp_food1.one_food(a - 1).food_name())[k];
			food[k] = '\0';
		}

	printf("\n Введите возраст коровы (лет): ");
	cin >> age;

	printf("\n Введите вес коровы (кг): ");
	cin >> weight;

	printf("\n Введите надой коровы (л/сут): ");
	cin >> nadoi;

	while (getchar() != '\n');

}

void cow::get(cow cow1)
{
	//cow1.id = id;
	strcpy(cow1.name, name);
	strcpy(cow1.breed, breed);
	strcpy(cow1.food, food);
	cow1.age = age;
	cow1.weight = weight;
	cow1.nadoi = nadoi;
}


void cow::print_cow()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	cout << "\n ИМЯ: " << name << "\n ПОРОДА: " << breed << "\n КОРМ: " << food << "\n ВОЗРАСТ(лет): " << age << "\n ВЕС(кг): " << weight << "\n НАДОЙ(л/день): " << nadoi << endl;
}


void cow::inc_age()
{
	age++;
}


class list_cow
{
public:
	list_cow(); //  конструктор
	~list_cow();//  деструктор
	void add(cow cow1); //Функция инициализации элементов данных
	cow ret(cow cow1); //Функция возврата элементов данных
	void arr_inc(); //Функция увеличения размера массива
	void print_list();
	void inc_age_sp(); //Увеличение возраста коровы на 1 год
	int num_sp(); //Возвращает количество коров в списке

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

cow list_cow::ret(cow cow1)
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
}

int list_cow::num_sp()
{
	return(num);
}

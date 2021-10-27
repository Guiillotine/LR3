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
	void set(char name[], char company[], double price); //Вводим "0" (" " для char), чтобы пропустить параметр
	void set_new_food(); //Функция инициализации элементов данных
	void get_print_food(); //Вывод на экран информации об одной корове
	string food_name(); //Возвращает название корма

private:
	char name[50];
	char company[70]; //фирма
	double price;
};

class list_food
{
public:
	list_food(); //  конструктор
	~list_food();//  деструктор
	void add(food food1); //Функция инициализации элементов данных
	void arr_inc(); //Функция увеличения размера массива
	void get_print_list();
	food one_food(int i);
	int num_sp();

private:
	int num = 0;
	food* arr_food = new food[1];
	//friend void cow::set(list_food& sp_food1);
};
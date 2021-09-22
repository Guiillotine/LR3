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
	void set_new_worker(); //Функция инициализации элементов данных
	void get(worker worker1); //Функция возврата элементов данных
	void get_print_worker(); //Вывод на экран информации об одной корове
	void change_stat(int a); //Изменить статус работника

private:
	char fio[100];
	int year; //Год рождения
	char prof[100]; //Профессия
	char stat[10]; //в норме/ болеет/ в отпуске
	double pay; //оклад
};

/////////////////////////////////////////////////////////////////////////////////////
class list_worker
{
public:
	list_worker(); //  конструктор
	~list_worker();//  деструктор
	void add(worker worker1); //Функция инициализации элементов данных
	//worker ret(int numb); //Функция возврата строки
	void arr_inc(); //Функция увеличения размера массива
	void get_print_list();
	int num_sp(); //Возвращает количество сотрудников в списке
	void change_stat(); //Изменение статуса сотрудника

private:
	int num = 0;
	worker* arr_worker = new worker[1];
};

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

/*class worker;
class list_worker;

class worker
{
public:
	worker(); //  конструктор
	~worker();//  деструктор
	void set_new_worker(); //Функция инициализации элементов данных
	void get_print_worker(); //Вывод на экран информации об одном работнике
	void change_stat(int a); //Изменить статус работника
	friend void list_worker::PayOneWorker(worker &worker);

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
	void arr_inc(); //Функция увеличения размера массива
	void get_print_list();
	int num_sp(); //Возвращает количество сотрудников в списке
	void change_stat(); //Изменение статуса сотрудника
	void PayOneWorker(worker& worker);

private:
	int num = 0;
	worker* arr_worker = new worker[1];
};

void list_worker::PayOneWorker(worker& worker)
{
	//worker.
}*/


/*class Apple;
class Human;

class Human
{
public:
	void TakeApple(Apple& apple);
};

class Apple {
public:
	Apple(int weight, string color)
	{
	}
	friend void Human::TakeApple(Apple& apple);
private:
	int weight;
	string color;
};

void Human::TakeApple(Apple& apple)
{
	apple.color;
}*/



/*class worker;
class list_worker;

class list_worker
{
public:
	void PayOneWorker(worker& worker);
};

class worker {
public:
	worker(int weight, string color)
	{
	}
	friend void list_worker::PayOneWorker(worker& worker);
private:
	int pay;

};

void list_worker::PayOneWorker(worker& worker)
{
	worker.pay;
}*/



/*class worker;
class list_worker;

class list_worker
{
public:
	list_worker(); //  конструктор
	~list_worker();//  деструктор
	void add(worker worker1); //Функция инициализации элементов данных
	void arr_inc(); //Функция увеличения размера массива
	void get_print_list();
	int num_sp(); //Возвращает количество сотрудников в списке
	void change_stat(); //Изменение статуса сотрудника
	void PayOneWorker(worker& worker);
private:
	int num = 0;
	worker* arr_worker = new worker[10];
};





class worker {
public:
	worker(); //  конструктор
	~worker();//  деструктор
	void set_new_worker(); //Функция инициализации элементов данных
	void get_print_worker(); //Вывод на экран информации об одном работнике
	void change_stat(int a); //Изменить статус работника
	friend void list_worker::PayOneWorker(worker& worker);
private:
	char fio[100];
	int year; //Год рождения
	char prof[100]; //Профессия
	char stat[10]; //в норме/ болеет/ в отпуске
	double pay;

};

void list_worker::PayOneWorker(worker& worker)
{
	worker.pay;
}*/
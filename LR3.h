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

class cow
{
public:
	cow(); //  конструктор
	~cow();//  деструктор
	void new_cow(); //Функция инициализации элементов данных
	void get(cow cow1); //Функция возврата элементов данных
	void inc_age(); //Увеличить возраст
	void print_cow(); //Вывод на экран информации об одной корове
	//int id;

private:
	int id;
	char name[50];
	char breed[100]; //порода
	char food[50];
	int age;
	double weight;
	int nadoi; //Надой
};

cow::cow()
{
	id = 0;
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
void cow::new_cow()
{
	/*id = id0;
	strcpy(name, name0);
	strcpy(breed, breed0);
	strcpy(food, food0);
	age = age0;
	weight = weight0;
	nadoi = nadoi0;*/

	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	int a;
	//system("cls");
	printf("\n Добавление новой коровы\n ");
	for (int i = 0; i < 23; i++) printf("-");
	printf("\n");
	//id = num_cow + 1;

	printf("\n Введите кличку коровы: ");
	gets_s(name);

	printf("\n Введите породу коровы: ");
	gets_s(breed); //gets_s для ввода с пробелами

/*printf("\n Выберите корм для коровы: ");
	for (int i = 0; i < num_food; i++)
		printf("\n %d->%s", i + 1, food1[i].name);
	printf("\n ");
	std::cin >> a;
	while (getchar() != '\n');
	for (int i = 0; i < num_food; i++)
		if (a == (i + 1)) strcpy(cow1[num_cow].food, food1[i].name);*/

	strcpy(food, "Овёс");

	printf("\n Введите возраст коровы (лет): ");
	cin >> age;

	printf("\n Введите вес коровы (кг): ");
	cin >> weight;

	printf("\n Введите надой коровы (л/сут): ");
	cin >> nadoi;

	//cout << "\n № " << id << "\n ИМЯ: " << name << "\n ПОРОДА: " << breed << "\n КОРМ: " << food << "\n ВОЗРАСТ(лет): " << age << "\n ВЕС(кг): " << weight << "\n НАДОЙ(л/день): " << nadoi;
	//num_cow++;
	while (getchar() != '\n');

}

void cow::get(cow cow1)
{
	cow1.id = id;
	strcpy(cow1.name, name);
	strcpy(cow1.breed, breed);
	strcpy(cow1.food, food);
	cow1.age = age;
	cow1.weight = weight;
	cow1.nadoi = nadoi;
}

void cow::inc_age()
{
	age++;
}

void cow::print_cow()
{
	SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
	SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
	cout << "\n ИМЯ: " << name << "\n ПОРОДА: " << breed << "\n КОРМ: " << food << "\n ВОЗРАСТ(лет): " << age << "\n ВЕС(кг): " << weight << "\n НАДОЙ(л/день): " << nadoi << endl;
}





class list_cow
{
public:
	list_cow(); //  конструктор
	~list_cow();//  деструктор
	void add(cow cow1); //Функция инициализации элементов данных
	cow get(cow cow1); //Функция возврата элементов данных
	//void print_list();
	void arr_inc(); //Функция увеличения размера массива
	void print_list();

private:
	int num = 0;
	cow* arr_cow = new cow[1];
};

list_cow::list_cow()
{
	//arr_cow = (cow*)malloc(2 * sizeof(cow));
	//num = 0;
	//*arr_cow = {};
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
		cow2 = *(arr_cow + i);
		cow2.print_cow();
	}
}

void list_cow::arr_inc()
{
	/*cow* arr_cow2;//Вспомогательный динамический массив типа cow
	arr_cow2 = (cow*)malloc((num) * sizeof(cow));
	//cow* arr_cow2 = new cow[num - 1]; //Вспомогательный динамический массив типа cow
	for (int i = 0; i < (num - 1); i++)
	{
		//(arr_cow + 0)->print_cow();
		*(arr_cow2 + i) = *(arr_cow + i);
	}
		//delete [num - 1] arr_cow;
	free(arr_cow);
	arr_cow = (cow*)malloc((num + 1) * sizeof(cow));
	cout << "\n КОЛВО ЯЧЕЕК " << num + 1;

	//cow* arr_cow = new cow[num];
	for (int i = 0; i < num - 1; i++)
	{
		*(arr_cow + i) = *(arr_cow2 + i);
		//(arr_cow + i)->print_cow();
	}

		//delete [num - 1] arr_cow2;
	free(arr_cow2);
	cout << "\n ЭТО СРАЗУ ПОСЛЕ ФУНКЦИИ УВЕЛИЧЕНИЯ МАССИВА ЭЛЕМЕНТ 0\n";
	(arr_cow + 0)->print_cow();*/




	/*cow* arr_cow2;
	arr_cow2 = (cow*)malloc(num * sizeof(cow));

		for (int i = 0; i < num; i++)
		{
			*(arr_cow2 + i) = *(arr_cow + i);
		}
		//cow1 = {};
		free(arr_cow);
		//num_cow2 = num_cow + 10;
		arr_cow = (cow*)malloc((num + 1) * sizeof(cow));
		for (int i = 0; i < num; i++)
		{
			*(arr_cow + i) = *(arr_cow2 + i);
		}
		//cow2 = {};
		free(arr_cow2);*/

	cow* arr_cow2 = new cow[num];
	//arr_cow2 = (cow*)malloc(num * sizeof(cow));

	for (int i = 0; i < num; i++)
	{
		*(arr_cow2 + i) = *(arr_cow + i);
	}
	//cow1 = {};
	delete [] arr_cow;
	//num_cow2 = num_cow + 10;
	//arr_cow = (cow*)malloc((num + 1) * sizeof(cow));
	arr_cow = new cow[num + 1];
	for (int i = 0; i < num; i++)
	{
		*(arr_cow + i) = *(arr_cow2 + i);
	}
	//cow2 = {};
	delete [] arr_cow2;

}


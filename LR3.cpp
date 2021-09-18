#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "LR3.h"
using namespace std;

int main()
{
    SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
    SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
    cout << "Hello World!\n";
    cow cow1;
    cow1.set(); //void set(int id0, char name0[], char breed0[], char food0[], int age0, int weight0, int nadoi0); //Функция инициализации элементов данных
    cow1.print_cow();
}

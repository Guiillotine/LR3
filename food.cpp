#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string>
using namespace std;

class Warehouse;
class Food;

class Warehouse
{
public:
    void AddKorm(Food& spisKorm);
    Warehouse()
    {
        kolVo = 0;
    }
    ~Warehouse()
    {

    }
    Warehouse operator +(const Warehouse& other)
    {
        Warehouse temp;
        for (int i = 0; i < this->kolVo; i++) { temp.KormSklad[i] = this->KormSklad[i]; temp.kolVo++;}
        for (int i = 0; i < other.kolVo; i++) if (temp.kolVo < 100) { temp.KormSklad[i + this->kolVo] = other.KormSklad[i]; temp.kolVo++;}
        return(temp);
    }
    void print() { for (int i = 0; i < kolVo; i++) cout << "\n " << KormSklad[i]; }
private:
    int kolVo = 0;
    string KormSklad[100]{};
};

class Food
{
public:
    Food() { cout << "\n *Запуск конструктора без параметров класса Food*\n"; }
    Food(const Food &food)
    {
        cout << "\n *Запуск конструктора копии класса Food (глубокое копирование)*\n";
        this->kolVoKorm = food.kolVoKorm;
        this->arr_food = new string[kolVoKorm];
        for (int i = 0; i < kolVoKorm; i++) this->arr_food[i] = food.arr_food[i];
    }
    ~Food(){ cout << "\n *Запуск деструктора класса Food*\n";}
    void Add(string name)
    {
        if (kolVoKorm > 0) ArrResize();
        arr_food[kolVoKorm] = name;
        kolVoKorm++;
    }
    void Set()
    {
        if (kolVoKorm > 0) ArrResize();
        cout << "\n Добавление нового корма\n\n Введите название корма: ";
        cin >> arr_food[kolVoKorm];
        kolVoKorm++;
    }
    void ArrResize()
    {
        string* arr_food2 = new string[kolVoKorm + 1];
        for (int i = 0; i < kolVoKorm; i++) arr_food2[i] = arr_food[i];
        arr_food = arr_food2;
    }
    int GetKolVo() { return (kolVoKorm); }
    string FoodName(int k) { return (arr_food[k]); }
    void Print() { cout << "\n"; for (int i = 0; i < kolVoKorm; i++) cout << "\n №" << (i + 1) << " " << arr_food[i];cout << "\n"; }
    void ChangeFood(int numb, string newFood) { arr_food[numb - 1] = newFood; }
    void operator =(const Food& other)
    {
        cout << "\n *Перезрузка оператора \'=\' (глубокое копирование)*\n";
        this->kolVoKorm = other.kolVoKorm;
        this->arr_food = new string[kolVoKorm];
        for (int i = 0; i < kolVoKorm; i++) this->arr_food[i] = other.arr_food[i];
    }   
    friend void Warehouse::AddKorm(Food& food);
private:
    string* arr_food = new string[10];
    int kolVoKorm = 0;
};

void Warehouse::AddKorm(Food& spisKorm)
{
    int num;
    cout << "\n Список кормов:\n";
    for (int i = 0; i < spisKorm.kolVoKorm; i++) cout << "\n " << i + 1 << "->" << spisKorm.arr_food[i];
    cout << "\n Введите номер корма из списка для помещения его на склад: "; cin >> num;
    KormSklad[kolVo] = spisKorm.arr_food[num-1];
    cout << "\n Корм " << spisKorm.arr_food[num - 1] << " помещён на склад.\n";
    kolVo++;
}

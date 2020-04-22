#include <iostream>
#include<Windows.h>
#include"Ryadok.h"



using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Ryadok CS1 ("Roma");
	cout << "Виводимо перший рядок :"; CS1.Print();
	Ryadok CS2(CS1);
	cout << "Виводимо другий рядок :"; CS2.Print();
	Ryadok CS3;
	CS3 = "h0e0l0l0o0 ";
	cout << "Виводимо третій рядок :"; 
	CS3.Print();
	CS1 = (CS3 + CS2);
	cout << "Додаємо 2 та 3 рядок і записуємо в 1 рядок:";
	CS1.Print();
	cout << "Від третього рядка віднімаємо всі символт '0' і виводимо на екран : ";
	CS3 - '0';
	CS3.Print();
	return 0;
}

#include <iostream>
#include<Windows.h>
#include"Ryadok.h"



using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Ryadok CS1 ("Roma");
	cout << "�������� ������ ����� :"; CS1.Print();
	Ryadok CS2(CS1);
	cout << "�������� ������ ����� :"; CS2.Print();
	Ryadok CS3;
	CS3 = "h0e0l0l0o0 ";
	cout << "�������� ����� ����� :"; 
	CS3.Print();
	CS1 = (CS3 + CS2);
	cout << "������ 2 �� 3 ����� � �������� � 1 �����:";
	CS1.Print();
	cout << "³� �������� ����� ������� �� ������� '0' � �������� �� ����� : ";
	CS3 - '0';
	CS3.Print();
	return 0;
}

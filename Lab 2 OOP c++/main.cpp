#include<iomanip>
#include<iostream>
#include<Windows.h>
#include"MyString.h"
#include"Text.h"


using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MyString str1("Hello ");
	MyString str2("World! ");
	MyString str3("My name is Roma, i am 18 years old :)");

	MyString mas[] = {str1,str2};
	Text first_text(mas, 2);//��������� ������
	cout<< "�����:" << endl;
	first_text.Print();//��������� ������
	cout << endl;

	first_text.PlusString(str3);//��������� ����� �� ������
	cout << "����� ���� ��������� �����: "<<endl;
	first_text.Print();//��������� ������
	cout << endl;

	cout << "�������� ������� ������� � ����� :" ;
	cout << first_text.Size_Text() << " �������" << endl;//�������� ������� ������� � �����
	cout << "³������ ������� - ���� � ����� :";
	cout << first_text.DigitsProcent(first_text.Size_Text()) << "%" << endl;//������� ������� - ���� � �����

	
	cout << "�������� ����� : "<< endl;
	first_text.Print();
	cout << endl;
	cout << "��������� ����� � ����� :" << endl;
	first_text.BigStr().Print();//����������� ���������� ����� ������ � ��������� �� �����
	cout << endl;


	cout << "����� ���� ��������� �������� ����� :" << endl;
	first_text.StringDel(2);// ��������� �������� ����� ������
	first_text.Print();
	cout << endl;

	cout << "����� ���� ������� �������� :" << endl;
	first_text.DelText();// �������� ������
	first_text.Print();
	

	return 0;
}




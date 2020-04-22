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
	Text first_text(mas, 2);//створення тексту
	cout<< "Текст:" << endl;
	first_text.Print();//виведення тексту
	cout << endl;

	first_text.PlusString(str3);//додавання рядка до тексту
	cout << "Текст після додавання рядка: "<<endl;
	first_text.Print();//виведення тексту
	cout << endl;

	cout << "Загальна кількість символів у тексті :" ;
	cout << first_text.Size_Text() << " Символів" << endl;//загальна кількість символів у тексті
	cout << "Відсоток символів - цифр у тексті :";
	cout << first_text.DigitsProcent(first_text.Size_Text()) << "%" << endl;//відсоток символів - цифр у тексті

	
	cout << "Поточний текст : "<< endl;
	first_text.Print();
	cout << endl;
	cout << "Найбільший рядок у тексті :" << endl;
	first_text.BigStr().Print();//знаходження найбільшого рядка тексту і виведення на екран
	cout << endl;


	cout << "Текст після видалення заданого рядка :" << endl;
	first_text.StringDel(2);// видалення заданого рядка тексту
	first_text.Print();
	cout << endl;

	cout << "Текст після повного очищення :" << endl;
	first_text.DelText();// очищення тексту
	first_text.Print();
	

	return 0;
}




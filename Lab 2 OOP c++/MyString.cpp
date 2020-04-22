

#include"MyString.h"
#include<iostream>


	//конструктор без параметров
MyString::MyString()
	{
		str = nullptr;
		length = 0;
	}
MyString::MyString(const char* str)
	{
		length = Dovgina(str);
		this->str = new  char[length + 1];
		for (int i = 0; i < length; i++)
		{
			this->str[i] = str[i];
		}
		this->str[length] = '\0';
	}
int MyString::  Dovgina()
	{
		int len = 0;
		while (str[len] != '\0')
		{
			len++;
		}
		return len;
	}
int MyString:: Dovgina(const char* str)
	{
		int len = 0;
		while (str[len] != '\0')
		{
			len++;
		}
		return len;
	}//вычисление длины строки
float MyString::Num_of_digit()
{
	int quantity = 0;
	for (int j = 0; j < length; j++)
	{
		if (str[j] >= '0' && str[j] <= '9')
		{
			quantity += 1;
		}
	}

	return quantity;
}
void MyString::Print()
{
	std::cout << str;
}



	/*MyString Concatination(MyString& other, MyString& other2)// конкатенація двох рядків
	{
		int firstlen = Dovgina(other.str);
		int secondlen = Dovgina(other2.str);
		int sumlen = firstlen + secondlen;
		str = new char[sumlen + 1];
		for (int i = 0; i < firstlen; i++)
		{
			str[i] = other.str[i];
		}
		for (int j = 0; j < secondlen; j++)
		{
			str[j + firstlen] = other2.str[j];
		}
		str[sumlen] = '\0';
		return str;
	}*/
	/*char* Concatinat(MyString& other)
	{
		int firstlen = Dovgina(this->str);
		int secondlen = Dovgina(other.str);
		int sumlen = firstlen + secondlen;
		char* Con = new char[sumlen + 1];
		for (int i = 0; i < firstlen; i++)
		{
			Con[i] = this->str[i];
		}
		for (int j = 0; j < secondlen; j++)
		{
			Con[j + firstlen] = other.str[j];
		}
		Con[sumlen] = '\0';
		return Con;
	}*/
	
	/*~MyString()
	{
		delete[] str;
		cout << "диструктор рядок" << endl;
	}*/
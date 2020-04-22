#include<iostream>
#include"Ryadok.h"



Ryadok::Ryadok()//Конструктор без параметрів(для створення пустого обєкту)
	{
		_ryadok = nullptr;
		_len = 0;
	}
Ryadok::Ryadok(const char* ryadok)//Конструктор з параметрами
	{
		_len = Dovgina(ryadok);
		_ryadok = new char[_len + 1];
		for (int i = 0; i < _len; i++)
		{
			_ryadok[i] = ryadok[i];
		}
		_ryadok[_len] = '\0';
	}
Ryadok::Ryadok(const Ryadok& other)//Конструктор копіювання
	{
		_len = other._len;
		_ryadok = new char[other._len + 1];
		for (int i = 0; i < other._len + 1; i++)
		{
			_ryadok[i] = other._ryadok[i];
		}
			   
}
int Ryadok::Dovgina(const char* str)//знаходження довжини рядка
	{
		int dovgina = 0;
		while (str[dovgina] != '\0')
		{
			dovgina++;
		}
		return dovgina;
	}
Ryadok Ryadok:: operator +(const Ryadok& other)//перенавантаження оператора додавання
	{
		char* ryadok_sum = new char[_len + other._len + 1];
		for (int i = 0; i < _len; i++)
		{
			ryadok_sum[i] = _ryadok[i];
		}
		for (int j = _len; j < _len + other._len + 1; j++)
		{
			ryadok_sum[j] = other._ryadok[j - _len];
		}

		return ryadok_sum;
	}
Ryadok& Ryadok:: operator=(const Ryadok& other)
	{
		_len = other._len;
		delete[]_ryadok;
		_ryadok = new char[other._len + 1];
		for (int i = 0; i < other._len; i++)
		{
			_ryadok[i] = other._ryadok[i];
		}
		_ryadok[other._len] = '\0';
		return *this;
	}

Ryadok& Ryadok:: operator-(const char vidyemnuk)
	{
		int num_of_null = 0;
		for (int i = 0; i < _len; i++)
		{
			if (_ryadok[i] == vidyemnuk)
			{
				num_of_null += 1;
			}
		}
		char* new_ryadok = new char[_len - num_of_null + 1];
		int j = 0;
		for (int i = 0; i < _len; i++)
		{
			new_ryadok[j] = _ryadok[i];
			if (_ryadok[i] == vidyemnuk)
			{
				continue;
			}
			j++;
		}
		new_ryadok[_len - num_of_null] = '\0';
		_len -= num_of_null;
		_ryadok = new_ryadok;
		return *this;
	}
void Ryadok:: Print()
	{
		std::cout << _ryadok << std::endl;
	}

Ryadok::~Ryadok()//Диструктор
	{
		delete[]_ryadok;
	}

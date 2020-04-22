#include<iostream>
#include"MyString.h"
#include"Text.h"


Text::Text()
	{
		_text = {};
		_number_str = 0;
	}
Text::Text(MyString* text, int number_str)
	{
		_text = text;
		_number_str = number_str;
	}
	MyString* Text::PlusString(MyString str)
	{
		MyString* old_text = new MyString[_number_str];
		old_text = _text;
		_number_str++;
		_text = new MyString[_number_str];
		for (int i = 0; i < _number_str - 1; i++)
		{
			_text[i] = old_text[i];
		}
		_text[_number_str - 1] = str;
		return _text;
	}
	MyString* Text::StringDel(int num_str)
	{
		_text[num_str - 1] = "";
		return _text;
	}
	void Text::DelText()
	{

		for (int i = 0; i < _number_str; i++)
		{
			_text[i] = "";
		}
		_number_str = 0;
	}
	MyString Text::BigStr()
	{
		MyString big_str = _text[0];
		for (int i = 0; i < _number_str; i++)
		{
			if (_text[i].Dovgina() > big_str.Dovgina())
			{
				big_str = _text[i];
			}
		}
		return big_str;
	}
	float Text::DigitsProcent(int num_sym)
	{
		float digit_in_text = 0;
		float temp_num = 0;
		for (int i = 0; i < _number_str; i++)
		{
			temp_num += _text[i].Num_of_digit();
		}
		digit_in_text = (temp_num / num_sym) * 100;
		return digit_in_text;
	}

	int Text::Size_Text()
	{
		int temp_size = 0;
		for (int i = 0; i < _number_str; i++)
		{
			temp_size += _text[i].Dovgina();
		}
		return temp_size;
	}

	void Text::Print()
	{
		for (int i = 0; i < _number_str; i++)
		{
			_text[i].Print();
		}
	}
	Text::~Text()
	{
		delete[] _text;
		/*std::cout << "диструктор текст" << std::endl;*/
	}



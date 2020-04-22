#ifndef MYSTRING_H_
#define MYSTRING_H_

class MyString
{
private:
	// ”казатель на массив char, хранит символы, которые мы передали в наш объект.
	char* str;
	int length;
public:
	MyString();//конструктор без параметров
	MyString(const char* str);
	int  Dovgina();
	int  Dovgina(const char* str);
	float Num_of_digit();
	void Print();
};
	

#endif /*MYSTRING_H_*/

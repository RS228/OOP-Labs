#ifndef MYSTRING_H_
#define MYSTRING_H_

class MyString
{
private:
	// ��������� �� ������ char, ������ �������, ������� �� �������� � ��� ������.
	char* str;
	int length;
public:
	MyString();//����������� ��� ����������
	MyString(const char* str);
	int  Dovgina();
	int  Dovgina(const char* str);
	float Num_of_digit();
	void Print();
};
	

#endif /*MYSTRING_H_*/

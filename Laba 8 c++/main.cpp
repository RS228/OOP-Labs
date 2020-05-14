#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int NumOfDigits(string str)
{
	int counter = 0;
	for (int i = 0; str[i]; i++)
	{
		if (isdigit(str[i]))
		{
			counter++;
		}
	}
	return counter;
}
int NumOfLetters(string str)
{
	string s = str; 
	int counter = 0;
	for (int i = 0; i < s.length(); i++)
	{ 
		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
		{
			counter++;
		}
	}
	return counter;
}

int NumOfOtherSym(string str)
{
	return str.length() - NumOfDigits(str) - NumOfLetters(str);
}
void show(int(func(string)),string str)
{
	cout << "Result of function " <<*func<< " =" << func(str)<<endl;
}


int main()
{
	string str ;
	cout << "Input your string : " << endl;
	getline(cin,str);
	cout <<"String :"<<str<<"\n"<<"Length of string : " <<str.length()<< endl;
	show(NumOfDigits,str);
	show(NumOfLetters, str);
	show(NumOfOtherSym, str);
	return 0;
}

#include<iostream>

using namespace std;

class String
{
protected:
	char* _string;
	int _len;
	int Length(const char* string)
	{
		int len = 0;
		int i = 0;
		while (string[i] != '\0')
		{
			len++;
			i++;
		}
		return len;
	}
public:
	String()
	{
	 _string = {};
	  _len= 0;
	}
	String(const char* string)
	{
		_len = Length(string);
		_string = new char[_len];
		for(int i =0;i<=_len;i++)
		{
			_string[i] = string[i];
		}
		
	}
	char* GetString()
	{
		return _string;
	}
	int Length()
	{
		int len = 0;
		int i = 0;
		while (_string[i] != '\0')
		{
			len++;
			i++;
		}
		return len;
	}	
	virtual char* StringIncrease() = 0;
	
};
class Digits : String
{
public:
	Digits(const char* string)
	{
		_len = Length(string);
		_string = new char[_len];
		for (int i = 0; i <= _len; i++)
		{
			_string[i] = string[i];
		}
	}

	char * StringIncrease()
	{
		char* PreviousStr = _string;int PreviousLen = _len;
		_len *= 2;
		_string = new char[_len + 1];
		int j = 0;
		for (int i = 0; i <= PreviousLen; i++)
		{
			if (PreviousStr[i] == '\0')
			{
				_string[j] = PreviousStr[i];
			}
			else
			{
				_string[j] = PreviousStr[i];
				_string[j + 1] = PreviousStr[i];
				j += 2;
			}
		}
		return _string;
	}

};
class Symvols : public String
{
public:
	Symvols(const char* string)
	{
		_len = Length(string);
		_string = new char[_len];
		for (int i = 0; i <= _len; i++)
		{
			_string[i] = string[i];
		}
	}
	char* StringIncrease()
	{
		int NumOfK = 0;
		for (int i = 0; i < _len; i++)
		{
			if (_string[i] == 'k')
				NumOfK++;
		}
		char* PreviousStr = _string; int PreviousLen = _len;
		_len += NumOfK;
		_string = new char[_len + 1];
		int j = 0;
		for (int i = 0; i <= PreviousLen; i++)
		{

			if(PreviousStr[i]=='k')
			{
				_string[j] = PreviousStr[i];
				_string[j + 1] = PreviousStr[i];
				j += 1;
			}
			else
			{
				_string[j] = PreviousStr[i];
			}
			j++;
		}
		return _string;

	}
};


int main()
{
String first("Roma");
cout << "String object = "<<first.GetString() << endl;

Digits second("123456");
cout<<"Digits object  = "<<second.GetString()<<endl;
cout << "Increased Digits object = " << second.StringIncrease()<<endl;

Symvols third("koala cook ");
cout << "Symvols object = " << third.GetString() << endl;
cout << "Increased Symvols object =  " << third.StringIncrease() << endl;

return 0;
}

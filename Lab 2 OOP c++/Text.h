#ifndef TEXT_H_
#define TEXT_H_
#include"MyString.h"


class Text
{
private:
	MyString* _text;
	int _number_str;
public:
	Text();
	Text(MyString* text, int number_str);
	MyString* PlusString(MyString str);
	MyString* StringDel(int num_str);
	void DelText();
	MyString BigStr();
	float DigitsProcent(int num_sym);
	int Size_Text();
	void Print();
	~Text();


};
#endif /* TEXT_H_ */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MyStringy;

namespace Texty
{
  	public class Text
    {
		private MyString[] _text;
		private int _number_str;
		public Text()
			{
				_text = new MyString[_number_str];
				_number_str = 0;
			}
		public Text(MyString[] text, int number_str)
			{
				_text = text;
				_number_str = number_str;
			}
		public MyString[] PlusString(MyString str)
			{
				MyString[] old_text = new MyString[_number_str];
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
		public MyString[] StringDel(int num)
		{
			num--;
			MyString[] _temptext = new MyString[_number_str - 1];
			for (int i = num; i < _number_str - 1; i++)
			{
				_text[i] = _text[i + 1];
			}
			for (int i = 0; i < _number_str - 1; i++)
			{
				//if (num > cunt - 1) continue;
				_temptext[i] = _text[i];
			}
			_number_str--;
			return _temptext;
		}
		public void DelText()
		{

			_number_str = 0;
			_text = new MyString[_number_str];
	    }
		public MyString BigStr()
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
		public float DigitsProcent(int num_sym)
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

		public int Size_Text()
			{
				int temp_size = 0;
				for (int i = 0; i < _number_str; i++)
				{
					temp_size += _text[i].Dovgina();
				}
				return temp_size;
			}

		public void Print()
			{
				for (int i = 0; i < _number_str; i++)
				{
					_text[i].Print();
				}
			}
			

		}

	}


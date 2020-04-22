using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _STRING
{
	class Stringy
	{

		protected char[] _string;

		protected int _len;
		protected int Length(char[] strinG)
		{
			int len = 0;
			int i = 0;
			while (strinG[i] != '\0')
			{
				len++;
				i++;
			}
			return len;
		}
		public string Str
		{
			get
			{
				return new string(_string);
			}
		}
		public Stringy()
		{
			this._string = new char['0'];
			_len = 0;
		}
		public Stringy(char[] strinG)
		{
			_len = Length(strinG);
			 this._string = strinG;
			
		}
		public int Length()
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
		public virtual string StringIncrease()
		{
			return null;
		}
	};
	class Digits : Stringy
	{
		public Digits(char[] strinG)
		{
			_len = Length(strinG);
			_string = strinG;
		}
			
		

		override public string StringIncrease()
		{
			char[] PreviousStr = _string; int PreviousLen = _len;
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
			return new string(_string);
		}

	};
	class Symvols : Stringy
	{

		public Symvols(char[] strinG)
		{
			_len = Length(strinG);
			_string = strinG;
			
		}
		override public string StringIncrease()
		{
			int NumOfK = 0;
			for (int i = 0; i < _len; i++)
			{
				if (_string[i] == 'k')
					NumOfK++;
			}
			char[] PreviousStr = _string; int PreviousLen = _len;
			_len += NumOfK;
			_string = new char[_len + 1];
			int j = 0;
			for (int i = 0; i <= PreviousLen; i++)
			{

				if (PreviousStr[i] == 'k')
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
			return new string(_string);

		}
	};
}



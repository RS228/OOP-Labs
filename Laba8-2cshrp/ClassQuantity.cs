using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NamespaceQuantity
{
	class ClassQuantity
	{
		public delegate int DelQuantity();
		public delegate int StatDelQuantity(string strings);

		private string strings;
		public ClassQuantity(string _strings)
		{
			strings = _strings;
		}
		public int NumOfDigits()
		{
			int counter = 0;
			for (int i = 0; i < this.strings.Length; i++)
			{
				if (this.strings[i] >= '1' && this.strings[i] <= '9')
				{
					counter++;
				}
			}
			return counter;
		}
		public static int StatNumOfDigits(string strings1)
		{
			int counter = 0;
			for (int i = 0; i < strings1.Length; i++)
			{
				if (strings1[i] >= '1' && strings1[i] <= '9')
				{
					counter++;
				}
			}
			return counter;
		}
		public int NumOfLetters()
		{
			string s = this.strings;
			int counter = 0;
			for (int i = 0; i < this.strings.Length; i++)
			{
				if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
				{
					counter++;
				}
			}
			return counter;
		}

		public int NumOfOtherSym()
		{
			return this.strings.Length - NumOfDigits() - NumOfLetters();
		}
	}
}

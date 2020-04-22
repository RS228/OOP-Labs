using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyStringy
{
	public class MyString
	{
		private char[] str = { };
		private int length;
		
	public MyString()
		{
			this.str = new char['0'];
			length = 0;
		}
	public MyString(char[] str)
		{
			length = Dovgina(str);
			this.str = new char[length + 1];
			for (int i = 0; i < length; i += 1)
			{
				this.str[i] = str[i];
			}
			this.str[length] = '\0';
		}
	public int Dovgina()
		{
			int len = 0;
			while (str[len] != '\0')
			{
				len++;
			}
			return len;
		}
	public int Dovgina(char[] str)
		{
			int len = 0;
			while (str[len] != '\0')
			{
				len++;
			}
			return len;
		}
	public float Num_of_digit()
		{
			int quantity = 0;
			for (int j = 0; j < length; j++)
			{
				if (str[j] >= '0' && str[j] <= '9')
				{
					quantity += 1;
				}
			}

			return quantity;
		}
	public void Print()
		{
			Console.WriteLine(str);
		}

	}
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassRyadok
{
	public class Ryadok
	{
		private char[] _ryadok = { };//масив чарів - string 
		private int _len;//довжина рядка
		public Ryadok()
		{
			this._ryadok = new char[0];
			_len = 0;
		}

		public Ryadok(char[] ryadok)//Конструктор з параметрами
		{
			_len = Dovgina(ryadok);
			_ryadok = ryadok;
		}

		public Ryadok(Ryadok other)//Конструктор копіювання
		{
			_len = other._len;
			_ryadok = other._ryadok;

		}
		public int Dovgina(char[] str)//знаходження довжини рядка
		{
			int dovgina = 0;
			while (str[dovgina] != '\0')
			{
				dovgina++;
			}
			return dovgina;
		}
		public static Ryadok operator +(Ryadok left, Ryadok other)//перенавантаження оператора додавання
		{
			Ryadok suma = new Ryadok();
			suma._ryadok = new char[left._len + other._len + 1];
			for (int i = 0; i < left._len; i++)
			{
				suma._ryadok[i] = left._ryadok[i];
			}
			for (int j = left._len; j < left._len + other._len + 1; j++)
			{
				suma._ryadok[j] = other._ryadok[j - left._len];
			}

			return suma;
		}
		public static Ryadok operator -(Ryadok left, char vidyemnuk)
		{
			int numOfnull = 0;
			for (int i = 0; i < left._len; i++)
			{
				if (left._ryadok[i] == vidyemnuk)
				{
					numOfnull += 1;
				}

			}
			Ryadok newLeft = new Ryadok(new char[left._len - numOfnull]);
			int j = 0;
			for (int i = 0; i < left._len; i++)
			{
				newLeft._ryadok[j] = left._ryadok[i];
				if (left._ryadok[i] == vidyemnuk)
				{
					continue;
				}
				j++;
			}
			left._len -= numOfnull;
			return newLeft;
		}
		public void Print()
		{
			Console.WriteLine(this._ryadok);
		}

	}
}

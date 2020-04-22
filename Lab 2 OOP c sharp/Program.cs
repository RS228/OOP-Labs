using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Texty;
using MyStringy;

namespace Lab_2_OOP_c_sharp
{
	public class Program
	{
		static void Main(string[] args)
		{
			MyString str1 = new MyString(new char[] { 'H', 'e', 'l', 'l', 'o', ' ', '\0' });
			MyString str2 = new MyString(new char[] { 'W', 'o', 'r', 'l', 'd', '!', ' ', '\0' });
			MyString str3 = new MyString(new char[] { 'M', 'y', ' ', 'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 'R', 'o', 'm', 'a', ',', 'i', 'a', 'm', ' ', '1', '8', ' ', 'y', 'e', 'a', 'r', 's', ',', 'o', 'l', 'd', ' ', '\0' });

			MyString[] mas = new MyString[] { str1, str2 };
			Text first_text = new Text(mas, 2);//створення тексту
			Console.WriteLine("Текст:");
			first_text.Print();//виведення тексту
			Console.WriteLine();

			first_text.PlusString(str3);//додавання рядка до тексту
			Console.WriteLine("Текст пiсля додавання рядка: ");
			first_text.Print();//виведення тексту
			Console.WriteLine();

			Console.WriteLine("Загальна кiлькiсть символiв у текстi :");
			Console.WriteLine(first_text.Size_Text());//загальна кількість символів у тексті
			Console.WriteLine("Вiдсоток символiв - цифр у текстi :");
			Console.WriteLine(first_text.DigitsProcent(first_text.Size_Text()));//відсоток символів - цифр у тексті


			Console.WriteLine("Поточний текст : ");
			first_text.Print();
			Console.WriteLine();
			Console.WriteLine("Найбiльший рядок у текстi :");
			first_text.BigStr().Print();//знаходження найбільшого рядка тексту і виведення на екран
			Console.WriteLine();


			Console.WriteLine("Текст пiсля видалення заданого рядка :");
			first_text.StringDel(2);// видалення заданого рядка тексту
			first_text.Print();
			Console.WriteLine();

			Console.WriteLine("Текст пiсля повного очищення :");
			first_text.DelText();// очищення тексту
			first_text.Print();

			Console.ReadKey();
		}
	}
}


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ClassRyadok;

namespace Laba_4_c_sharp
{
   public class Program
    {
        static void Main(string[] args)
        {
		Ryadok CS1 = new  Ryadok (new char[] { 'R', 'o', 'm', 'a','\0' });
		Console.WriteLine( "Виводимо перший рядок :"); CS1.Print();
		Ryadok CS2 = new Ryadok(CS1);
		Console.WriteLine("Виводимо другий рядок :"); CS2.Print();
		Ryadok CS3;			
		CS3 = new Ryadok(new char[] { 'h', '0', 'e', '0', 'l', '0', 'l', '0', 'o', '\0' });
		Console.WriteLine("Виводимо третiй рядок :");
		CS3.Print();
		CS1 = (CS3 + CS2);
		Console.WriteLine("Додаємо 2 та 3 рядок i записуємо в 1 рядок:");
		CS1.Print();
		Console.WriteLine("Вiд третього рядка вiднiмаємо всi символи '0' i виводимо на екран : ");
		CS3 = CS3 - '0';
		CS3.Print();
		Console.ReadLine();
		}
	}
}

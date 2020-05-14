using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using NamespaceQuantity;
namespace Laba7_2cshrp
{
	
    class Program
    {
        
        
        static void Main(string[] args)
        {
			ClassQuantity strings = new ClassQuantity(Console.ReadLine());

			ClassQuantity.DelQuantity NumSym = strings.NumOfOtherSym;
			int result = NumSym();
			Console.WriteLine(result);


			ClassQuantity.StatDelQuantity StatNumDig = ClassQuantity.StatNumOfDigits;
			int result4= StatNumDig(Console.ReadLine());
			Console.WriteLine(result4);

			ClassQuantity.DelQuantity NumLet = strings.NumOfLetters;
			int result2 = NumLet();
			Console.WriteLine(result2);

			ClassQuantity.DelQuantity NumDig = strings.NumOfDigits;
			int result3 = NumDig();
			Console.WriteLine(result3); 

			Console.ReadKey();




		}
    }
}

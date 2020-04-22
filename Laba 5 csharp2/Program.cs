using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using _STRING;

namespace Laba_5_csharp2
{
    class Program
    {
        static void Main( )
        {
            Stringy first = new Stringy (new char[]{ 'R','o','m','a','\0'});
            Console.WriteLine("String object = " + first.Str);

            Digits second = new Digits(new char[] { '1', '2', '3', '4', '\0' });
            Console.WriteLine("Digits object  = " + second.Str);
            Console.WriteLine("Increased Digits object = " + second.StringIncrease());

            Symvols third = new Symvols(new char[] { 'k', 'o', 'k', 'a', '\0' });
            Console.WriteLine("Symvols object = " + third.Str);
            Console.WriteLine("Increased Symvols object =  " + third.StringIncrease());

            Console.ReadKey();
        }
    }
}

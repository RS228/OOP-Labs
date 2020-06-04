using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Lists;

namespace Laba_8cshrp_list_
{
    class Program
    {
       unsafe static void Main(string[] args)
        {
            List Digits = new List();

            Digits.PushBack(0);
            Digits.PushBack(3);
            Digits.PushBack(-1);
            Digits.PushBack(4);
            for (int i = 0; i < Digits.Size; i++)
            {
                Console.WriteLine(Digits[i]);
            }
            Console.WriteLine("Num of two " +Digits.MultiplesOfTwo() );
            
           
            Digits.RemoveAfterMin();
            Console.WriteLine("New List " + Digits.Size);
            for (int i = 0; i < Digits.Size; i++)
            {
                Console.WriteLine(Digits[i]);
            }
            Console.WriteLine(Digits[228]);
            Console.ReadKey();
        }
    }
}

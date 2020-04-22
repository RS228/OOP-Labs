using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_1_OOP_c_sharp
{
    class Program
    {
        public static bool Equal(int n, int m)
        {
            if ((n ^ m) == 0)
            {
                return true;
            }
            else { return false; }

        }
        public static void Add(int a, int b, ref int c)
        {

            while (!Equal(b, 0))
            {
                int induk = a & b;
                a = a ^ b;
                b = induk << 1;
                c = a;
            }
        }

            static void Main(string[] args)
        {
            int n = 115;
            int m = 41;
            bool rez_of_the_comperison = Equal(n, m);
            if (!rez_of_the_comperison)
            {
                Console.WriteLine("Числа не рiвнi ");
            }
            else
            {
                Console.WriteLine("Числа рiвнi ");
            }
            int a = 2;
            int b = 3;
            int c = 0;
            Add(a, b, ref c);
            Console.WriteLine(c);
            Console.ReadLine();

        }
    }
}

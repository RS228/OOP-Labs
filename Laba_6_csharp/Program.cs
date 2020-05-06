using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using NLog;
using ClassExpression;

namespace Laba_6_csharp
{
    
    class Program
    {
       
        static void Main(string[] args)
        {
            Expression first = new Expression() { a = 1, b = 2, c = 3, d = 4 };
            Expression second = new Expression() { a = 0, b = 0, c = 0, d = 5 };
            Expression third = new Expression() { a = 1, b = 3, c = 2, d = -1 };

            Expression[] mass = { first, second ,third };

            Console.WriteLine("Результат 1 обчислення = "+mass[0].Count());
            Console.WriteLine("Результат 2 обчислення = "+mass[1].Count());
            Console.WriteLine("Результат 3 обчислення = "+mass[2].Count());

            Console.ReadKey();
        }
    }
}

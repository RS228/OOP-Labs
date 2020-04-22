using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using _Figure;


namespace Laba_5_csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Figure triangle = new Figure(3);
            triangle[1] = new Point { TheNameOfVertex = 'A', X = 1, Y = 1 };
            triangle[2] = new Point { TheNameOfVertex = 'B', X = 3, Y = 1 };
            triangle[3] = new Point { TheNameOfVertex = 'C', X = 3, Y = 4 };
            Console.WriteLine("Довжина сторони AC 1 фiгури = "+triangle.SideLength('A', 'C'));

            Trapeze quadrate = new Trapeze();
            quadrate[1] = new Point { TheNameOfVertex = 'A', X = 1, Y = 1 };
            quadrate[2] = new Point { TheNameOfVertex = 'B', X = 3, Y = 1 };
            quadrate[3] = new Point { TheNameOfVertex = 'C', X = 3, Y = 4 };
            quadrate[4] = new Point { TheNameOfVertex = 'D', X = 1, Y = 4 };

            Console.WriteLine("Периметр квадрата  = "+quadrate.Perimeter());
            Console.WriteLine("Площа квадрата = "+quadrate.Square());

            Trapeze trapeze = new Trapeze();
            trapeze[1] = new Point { TheNameOfVertex = 'A', X = 1, Y = 1 };
            trapeze[2] = new Point { TheNameOfVertex = 'B', X = 9, Y = 1 };
            trapeze[3] = new Point { TheNameOfVertex = 'C', X = 9, Y = 4 };
            trapeze[4] = new Point { TheNameOfVertex = 'D', X = 5, Y = 4 };

            Console.WriteLine("Периметр трапецї = "+trapeze.Perimeter());
            Console.WriteLine("Площа трапецї = "+trapeze.Square());
            Console.WriteLine("Довжина сторони BC трапецiї = "+trapeze.SideLength('B', 'C'));
            Console.ReadKey();
            
        }
    }
}

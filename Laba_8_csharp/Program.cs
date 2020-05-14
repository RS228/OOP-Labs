using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ClassLibraryFor7;

namespace Laba_7_csharp
{
    
    class Program
    {
        static void Main(string[] args)
        {
            SwimmingPool basein = new SwimmingPool(2,2,2);
            basein.PoolFull += SwimmingPool.Pool_Full;
            basein.PoolEmpty += SwimmingPool.Pool_Empty;
            basein.AddWater(4000);
            basein.RemoveWater(4000);
            basein.AddWater(8000);
            Console.ReadKey();
        }
    }
}

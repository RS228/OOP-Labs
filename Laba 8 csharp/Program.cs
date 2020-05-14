using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Laba_7_csharp
{
    class Boozer
    {
        public int BoozeAmount { get; private set; }

        public event EventHandler OilEnded;
        public Boozer()
        {
            BoozeAmount = 100;
        }

        private void Worker()
        {
            for (int i = BoozeAmount; i >= 0; i--)
            {
                if (BoozeAmount == 0)
                {
                    if (OilEnded != null)
                    {
                        OilEnded(this, new EventArgs());
                    }
                }
                BoozeAmount--;
            }
        }
        public void LetsGoDrink()
        {
            Worker();
        }
        public static void Boozer_OnOilEnded(object sender, EventArgs eventArgs)
        {
            Console.WriteLine("Go v magaz po pivo");
        }
    }

    class Gopnik
   {
        public int SemkiAmount { get; private set; }
        public event EventHandler OilEnded;
        public Gopnik()
        {
            SemkiAmount = 250;
        }
        private void Worker()
        {
            for (int i = SemkiAmount; i >= 0; i--)
            {
                if (SemkiAmount == 0)
                {
                    if (OilEnded != null)
                    {
                        OilEnded(this, new EventArgs());
                    }
                }
                SemkiAmount--;
            }
        }
        public void LetsGoShelkat()
        {
            Worker();
        }

        public static void Gopnik_OnOilEnded(object sender, EventArgs eventArgs)
        {
            Console.WriteLine("Go v magaz po semki");
        }
   }

    class Program
    {
        static void Main(string[] args)
        {
            var boozer = new Boozer();
            boozer.OilEnded += Boozer.Boozer_OnOilEnded;

            var gopnik = new Gopnik();
            gopnik.OilEnded += Gopnik.Gopnik_OnOilEnded;

            gopnik.LetsGoShelkat();
            boozer.LetsGoDrink();

            Console.ReadKey();

        }
    }
}

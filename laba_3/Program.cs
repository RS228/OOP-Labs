using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Studenty;
using Group_of_studenty;

namespace laba_3
{
    public class Program
    {
        static void Main(string[] args)
        {
            Group_of_Student IS_91 = new Group_of_Student(5);

            
            IS_91["first"] = new Student() { Name = "Roma", Surname = "Sylchuk", Pobatkovi = "Palch" };


            Student second_s = new Student();
            IS_91["second"] = second_s;
            IS_91["second"].Name = "Ilya";
            IS_91["second"].Pobatkovi = "Levovich";
            IS_91["second"].Surname = "Chernachuk";

            Student third_s = new Student();
            IS_91["third"] = third_s;
            IS_91["third"].Name = "Vasya";
            IS_91["third"].Surname = "Nechai";
            IS_91["third"].Pobatkovi = "Olegovich";

            Student fourth_s = new Student();
            IS_91["fourth"] = fourth_s;
            IS_91["fourth"].Name = "Kolya";
            IS_91["fourth"].Surname = "Voznuk";
            IS_91["fourth"].Pobatkovi = "Georgiovsch";

            Student fifth_s = new Student();
            IS_91["fifth"] = fifth_s;
            IS_91["fifth"].Name = "Misha";
            IS_91["fifth"].Surname = "Nechai";
            IS_91["fifth"].Pobatkovi = "Alexandrovich";

            Console.WriteLine(IS_91["first"].Name + " " + IS_91["first"].Surname + " " + IS_91["first"].Pobatkovi);
            Console.WriteLine(IS_91["second"].Name + " " + IS_91["second"].Surname + " " + IS_91["second"].Pobatkovi);
            Console.WriteLine(IS_91["third"].Name + " " + IS_91["third"].Surname + " " + IS_91["third"].Pobatkovi);
            Console.WriteLine(IS_91["fourth"].Name + " " + IS_91["fourth"].Surname + " " + IS_91["fourth"].Pobatkovi);
            Console.WriteLine(IS_91["fifth"].Name + " " + IS_91["fifth"].Surname + " " + IS_91["fifth"].Pobatkovi);

            Console.WriteLine("Num of Nechai =" + Student.Nechai);
            Console.ReadKey();
        }
    }
}


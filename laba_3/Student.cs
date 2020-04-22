using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Studenty
{
    class Student
    {
        public static int Nechai = 0;
        private string surname;
        private string name;
        private string pobatkovi;
        public string Surname
        {
            get
            {
                return surname;
            }
            set
            {
                if (value == "Nechai")
                {
                    Nechai += 1;
                }
                surname = value;
            }
        }
        public string Name
        {
            get
            {
                return name;
            }
            set
            {

                name = value;
            }
        }
        public string Pobatkovi
        {
            get
            {
                return pobatkovi;
            }
            set
            {

                pobatkovi = value;
            }
        }

    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Studenty;

namespace Group_of_studenty
{
    class Group_of_Student
    {
        private Student[] data;


        public Group_of_Student(int size)
        {
            data = new Student[size];
        }

        public Student this[string index]
        {
            get
            {
                switch (index)
                {
                    case "first": return data[0];
                    case "second": return data[1];
                    case "third": return data[2];
                    case "fourth": return data[3];
                    case "fifth": return data[4];
                    default: return null;
                }

            }
            set
            {
                switch (index)
                {
                    case "first": data[0] = value; break;
                    case "second": data[1] = value; break;
                    case "third": data[2] = value; break;
                    case "fourth": data[3] = value; break;
                    case "fifth": data[4] = value; break;
                }

            }
        }
    }
}

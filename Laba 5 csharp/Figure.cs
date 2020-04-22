using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _Figure
{
    struct Point
    {
        public float TheNameOfVertex { get; set; }
        public float X { get; set; }
        public float Y { get; set; }

    }
    class Figure
    {

        protected Point[] _figure;
        protected int _TheNumOfVertex;

        public Figure(int size)
        {
            _figure = new Point[size];
            _TheNumOfVertex = size;
        }
        public Point this[int index]
        {
            get
            {
                return _figure[index - 1];
            }
            set
            {
                _figure[index - 1] = value;
            }
        }

        public double SideLength(char first, char second)
        {
            float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
            double sidelength;
            for (int i = 0; i < _TheNumOfVertex; i++)
            {
                if (_figure[i].TheNameOfVertex == first)
                {
                    x1 = _figure[i].X;
                    y1 = _figure[i].Y;
                }
                if (_figure[i].TheNameOfVertex == second)
                {
                    x2 = _figure[i].X;
                    y2 = _figure[i].Y;
                }
            }
            if (x1 == 0 || x2 == 0)
            {
                throw new System.InvalidOperationException("Не знайдено заданної точки для обчислення довжини");
            }
            else
            {
                sidelength = Math.Abs(Math.Sqrt(Math.Pow((x2 - x1), 2) + Math.Pow((y2 - y1), 2)));
            }

            return sidelength;
        }
        protected double SideLength(Point first, Point second)
        {
            float x1 = first.X, x2 = second.X, y1 = first.Y, y2 = second.Y;
            double sidelength;
            sidelength = Math.Abs(Math.Sqrt(Math.Pow((x2 - x1), 2) + Math.Pow((y2 - y1), 2)));
            return sidelength;
        }
    }
    class Trapeze : Figure
    {
        public Trapeze() : base(4)
        {
        }
        public double Perimeter()
        {
            double perimeter = 0;
            for (int i = 0; i < _TheNumOfVertex - 1; i++)
            {
                perimeter += SideLength(_figure[i], _figure[i + 1]);
            }
            perimeter += SideLength(_figure[0], _figure[_TheNumOfVertex - 1]);

            return perimeter;
        }
        public double Square()
        {
            double side1 = SideLength(_figure[0], _figure[1]);
            double side2 = SideLength(_figure[1], _figure[2]);
            double side3 = SideLength(_figure[2], _figure[3]);
            double side4 = SideLength(_figure[3], _figure[0]);
            double diagonal = SideLength(_figure[0], _figure[2]);
            double per1 = (diagonal + side1 + side2) / 2;
            double per2 = (diagonal + side3 + side4) / 2;
            double sqr1 = Math.Sqrt(per1 * (per1 - side1) * (per1 - side2) * (per1 - diagonal));
            double sqr2 = Math.Sqrt(per2 * (per2 - side3) * (per2 - side4) * (per2 - diagonal));
            double square = sqr1 + sqr2;
            return square;
        }
    }

}

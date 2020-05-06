using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using NLog; 

namespace ClassExpression
{
    public class Expression
    {
        private static Logger logger = LogManager.GetCurrentClassLogger();
        private double _a, _b, _c, _d;
        public double a
        {
            set
            {
                _a = value;
            }
            get
            {
                return _a;
            }
        }
        public double b
        {
            set
            {
                _b = value;
            }
            get
            {
                return _b;
            }
        }
        public double c
        {
            set
            {
                _c = value;
            }
            get
            {
                return _c;
            }
        }
        public double d
        {
            set
            {
                _d = value;
            }
            get
            {
                return _d;
            }
        }
        public Expression()
        {
            _a = 0; _b = 0; _c = 0; _d = 0;
        }

        public Expression(double a, double b, double c, double d)
        {
            _a = a; _b = b; _c = c; _d = d;
        }
       
        public double Count()
        {
            double rez = 0;
            //try
            {
                rez = (Math.Log10(4 * _b - _c) * _a) / (_b + _c / _d - 1);
                if (Double.IsNaN(rez))
                {
                    logger.Error("error NaN");
                    throw new Exception();
                }
                if (Double.IsInfinity(rez))
                {
                    logger.Error("error INFINITY");
                    throw new Exception();
                }
                return 0;
            }
            //catch (Exception)
            //{
            //    Console.Error.WriteLine("Помилка обчислення, перевiрте вхiднi даннi");
            //    return 0;
            //}
        }
    }
}

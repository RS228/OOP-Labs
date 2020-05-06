#include<iostream>
#include"Expression.h"
using namespace std;

double  Expression::GetA()
{
    return _a;
}
double Expression::GetB()
{
    return _b;
}
double Expression::GetC()
{
    return _c;
}
double Expression::GetD()
{
    return _d;
}
void Expression::SetA(double value)
{
    _a = value;
}
void Expression::SetB(double value)
{
    _b = value;
}
void  Expression::SetC(double value)
{
    _c = value;
}
void  Expression::SetD(double value)
{
    _d = value;
}
Expression::Expression()
{
    _a = 0; _b = 0; _c = 0; _d = 0;
}
Expression::Expression(float a, float b, float c, float d)
{
    _a = a; _b = b; _c = c; _d = d;
}
double Expression::Count()
{
    try
    {
        double rez = (log10(4 * _b - _c) * _a) / (_b + _c / _d - 1);
        if (rez == INFINITY)
        {
            throw exception("Помилка обчислення, перевiрте вхiднi даннi");
        }
        if (rez == NAN)
        {
            throw exception("Помилка обчислення, перевiрте вхiднi даннi");
        }
        if (_d == 0)
        {
            throw exception("Помилка обчислення, перевiрте вхiднi даннi");
        }
        if ((_b + _c / _d - 1) == 0)
        {
            throw exception("Помилка обчислення, перевiрте вхiднi даннi");
        }
        return rez;
    }
    catch (exception & ex)
    {
        cerr << ex.what() << endl;
        return NULL;
    }
}

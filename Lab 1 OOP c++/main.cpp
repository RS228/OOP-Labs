#include<iostream>
#include<string>
#include<Windows.h>


using namespace std;


bool Equal(int n, int m)
{
    bool equal = !(n ^ m);

    return equal;
}
void Add(int a, int b, int& c)
{

    while (!Equal(b, 0))
    {
        int induk = a & b;
        a = a ^ b;
        b = induk << 1;
    }
    c = a;

}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 115;
    int m = 41;
    bool rez_of_the_comperison = Equal(n, m);
    if (!rez_of_the_comperison)
    {
        cout << "„исла не р≥вн≥ " << endl;
    }
    else
    {
        cout << "„исла р≥вн≥" << endl;
    }
    int a = 2;
    int b = 3;
    int c;
    Add(a, b, c);
    cout << c << endl;
    system("pause");
    return 0;
}

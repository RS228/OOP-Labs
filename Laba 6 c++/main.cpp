#include <iostream>
#include<Windows.h>
#include"Expression.h"

using namespace std;




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Expression first(1, 2, 3, 4);
    Expression second(0, 0, 0, 5);
    Expression third(1, 3, 2, -1);

    Expression mass[] ={ first, second ,third };

    cout << "Результат 1 обчислення = " << mass[0].Count() << endl;;
    cout<<"Результат 2 обчислення = " << mass[1].Count()<<endl;
    cout<<"Результат 3 обчислення = " << mass[2].Count()<<endl;

    system ("pause");
    return 0;
}
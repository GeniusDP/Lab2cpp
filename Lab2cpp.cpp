#include <iostream>

using namespace std;

int main()
{
    int a, b, c;//числа, указанные в условии
    int sum;//сума чисел
    int min;//минимальное из чисел
    //ввод данных
    cout << "Type in coefficients in format: a b c" << endl;
    cin >> a >> b >> c;
    sum = a + b + c;

    //нахождение минимального из чисел
    //*********************************

    if (a < b) {
        if (a < c)min = a;
            else min = c;
    }
    else {
        if (b < c)min = b;
            else min = c;
    }

    //*********************************

    sum -= min;//вычитаем из суммы минимальное число
    //вывод ответа
    cout << "Answer is:" << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

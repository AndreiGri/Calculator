#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    system("chcp 1251>nul");
    system("color 70");
    
    string bufer;                                                              // Для записи запроса
    double a;                                                                  // переменная первая
    double b;                                                                  // переменная вторая
    char operation;                                                            // символ операнда
    double result;                                                             // Для записи результата

    cout << " Введите выражение для вычисления: ";                             // Запрашиваем
    cin >> bufer;                                                              // Записываем
    stringstream buffer_stream(bufer);                                         // Стримим записанное в bufer
    buffer_stream >> a >> operation >> b;                                      // Записываем отстримленное в переменные
    
    if (operation == '+')                                                      // ifами относительно вычесленного операнда
    {                                                                          // записываем результат вычисления в result
        result = a + b;
    }
    else
    {
        if (operation == '-')
        {
            result = a - b;
        }
        else
        {
            if (operation == '*')
            {
                result = a * b;
            }
            else
            {
                result = a / b;
            }
        }
    }

    string text1 = to_string(a);                                               // переводим из вубль в текст для 
    string text2 = to_string(b);                                               // для определения длинны в size()
    string text3 = to_string(result);

    cout << '\t' << setprecision(text1.size()) << a << ' ' << operation << ' ' // Выводим результат в консоль, 
                 << setprecision(text2.size()) << b << ' ' << '=' << ' '       // setprecision для исключения
                 << setprecision(text3.size()) << result << endl;              // округления в cout.

    system("pause>nul");
    return 0;
}
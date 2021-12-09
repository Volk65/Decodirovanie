#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(0, "RUS");
    char buff[50] = { 0 };
    cout << "Введите сообщение,которое будет закодированно" << endl;
    cin.getline(buff, 49);
    for (int i = 0; i < strlen(buff); i++)
        buff[i] += 3;
    cout << buff << endl;
    cout << "Декодированное: " << endl;
    for (int i = 0; i < strlen(buff); i++)
        buff[i] -= 3;
    cout << buff << endl;
    for (int i = 0; i < strlen(buff); i++)
        buff[i] += 3;
    {ofstream out;          // поток для записи
    out.open("D:\\Результат.txt"); // окрываем файл для записи
    if (out.is_open())
    {
        out << buff << std::endl;
    }
    system("pause");
    return 0;
    }
}

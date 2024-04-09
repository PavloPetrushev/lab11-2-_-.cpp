// lab11(2)_Петрушев.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int* ptr1, * ptr2, * ptr3; 

    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    *ptr1 = 10;
    *ptr2 = 20;
    *ptr3 = 30;

    cout << "Початкові значення:" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "Змінені значення:" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
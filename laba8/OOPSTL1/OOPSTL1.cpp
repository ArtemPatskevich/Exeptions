// OOPSTL1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "FlightBookingContainer.h"
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    FlightBookingContainer container;
    int choice = -1;
    while (true) {
        cout << "1. Добавить бронь в конец очереди\n";
        cout << "2. Удаление из начала очереди\n";
        cout << "3. Вывод начала\n";
        cout << "4. Вывод конца\n";
        cout << "5. Сохранить в файл начало\n";
        cout << "6. Сохранить в файл конец\n";
        cout << "0. Выход\n";
        cout << "Введите выбор: ";
        choice = -1;
        while (choice < 0 || choice > 6) {
            cout << "Введите число от 0 до 6: ";
            cin >> choice;
        }
        if (choice == 0) {
            break;
        }
        switch (choice) {
        case 1: {
            std::string destination;
            int flightNumber;
            std::cout << "Введите пункт назначения: ";
            std::cin >> destination;
            std::cout << "Введите номер рейса: ";
            std::cin >> flightNumber;
            container.add(FlightBooking(destination, flightNumber));
            break;
        }
        case 2: {
            container.remove();
            break;
        }
        case 3: {
            container.printFront();
            break;
        }
        case 4: {
            container.printBack();
            break;
        }
        case 5: {
            std::string filename;
            std::cout << "Введите название файла или путь к нему: ";
            std::cin >> filename;
            container.saveToFileFront(filename);
            break;
        }
        case 6:
            std::string filename;
            std::cout << "Введите название файла или путь к нему: ";
            std::cin >> filename;
            container.saveToFileBack(filename);
            break;
        }
    }
    SetConsoleCP(866);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

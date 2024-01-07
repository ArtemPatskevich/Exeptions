

#include <iostream>
#include "FlightBookingContainer.h"
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    FlightBookingContainer container;
    int choice = -1;
    SetConsoleCP(1251);
    while (true) {
        cout << "1. Добавить бронь\n";
        cout << "2. Удалить бронь\n";
        cout << "3. Редактировать бронь\n";
        cout << "4. Вывод\n";
        cout << "5. Сохранить в файл\n";
        cout << "6. Сортировать\n";
        cout << "7. Поиск брони\n";
        cout << "0. Выход\n";
        cout << "Введите выбор: ";
        choice = -1;
        while (choice < 0 || choice > 6) {
            cout << "Введите число от 0 до 7: ";
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
            int index;
            std::cout << "Введите индекс для удаления: ";
            std::cin >> index;
            container.remove(index);
            break;
        }
        case 3: {
            int index;
            std::string destination;
            int flightNumber;
            std::cout << "Введите индекс для редактирования: ";
            std::cin >> index;
            std::cout << "Введите новый пункт назначения: ";
            std::cin >> destination;
            std::cout << "Введите новый номер рейса: ";
            std::cin >> flightNumber;
            container.edit(index, FlightBooking(destination, flightNumber));
            break;
        }
        case 4: {
            container.print();
            break;
        }
        case 5: {
            std::string filename;
            std::cout << "Введите название файла или путь к нему: ";
            std::cin >> filename;
            container.saveToFile(filename);
            break;
        }
        case 6: {
            container.sort();
            break;
        }
        case 7: {
            int flightNumber;
            std::cout << "Введите номер рейса для поиска: ";
            std::cin >> flightNumber;
            int index = container.find(flightNumber);
            if (index != -1) {
                std::cout << "Бронь найдена под индексом " << index << std::endl;
            }
            else {
                std::cout << "Бронь не найдена" << std::endl;
            }
            break;
        }
        case 0:
            std::cout << "Выход..." << std::endl;
            break;
        default:
            std::cout << "Неправильный выбор" << std::endl;
            break;
        }
    }
    SetConsoleCP(866);
}


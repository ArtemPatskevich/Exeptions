

#include <iostream>
#include "Exhibition.h"
#include "Artwork.h"
#include "Artist.h"
#include "Organizer.h"
#include "Visitor.h"
#include "MyExeption.h"
#include <Windows.h>
#include "FileHandler.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    FileHandler file("text.txt");
    int choice = -1;
    Exhibition temp;
    string tempName;
    string tempLocation;
    vector<Artwork*> artworks;
    SetConsoleCP(1251);
    while (true) {
        cout << "0 - Выход" << endl;
        cout << "1 - Добавление данных в файл" << endl;
        cout << "2 - Редактирование данных в файле" << endl;
        cout << "3 - Удаление данных из файла" << endl;
        cout << "4 - Сортировка данных в файле" << endl;
        cout << "5 - Поиск данных в файле" << endl;
        cout << "6 - Вывод данных из файла" << endl;
        choice = -1;
        while (choice < 0 || choice > 6) {
            cout << "Введите число от 0 до 6: ";
            cin >> choice;
        }
        if (choice == 0) {
            break;
        }
        switch (choice)
        {
        case 1:
            cin >> temp;
            file.addData(temp);
            cout << endl;
            break;
        case 2:
            cout << "Введите название выставки для редактирования: ";
            tempName = "";
            cin >> tempName;
            if (file.searchData(tempName) == nullptr) {
                cout << "Ошибка. Выставка с таким названием не найдена" << endl;
            }
            else {
                cout << "Введите название локации для замены: ";
                tempLocation = "";
                cin >> tempLocation;
                file.editData(tempName, tempLocation);
            }
            cout << endl;
            break;
        case 3:
            cout << "Введите название выставки для удаления: ";
            tempName = "";
            cin >> tempName;
            if (file.searchData(tempName) == nullptr) {
                cout << "Ошибка. Выставка с таким названием не найдена" << endl;
            }
            else {
                file.deleteData(tempName);
            }
            cout << endl;
            break;
        case 4:
            file.sortData();
            cout << "Выполнена сортировка по названию выставки" << endl;
            cout << endl;
            break;
        case 5:
            cout << "Введите название выставки для поиска: ";
            tempName = "";
            cin >> tempName;
            if (file.searchData(tempName) == nullptr) {
                cout << "Ошибка. Выставка с таким названием не найдена" << endl;
            }
            else {
                cout << *file.searchData(tempName) << endl;
            }
            cout << endl;
            break;
        case 6:
            file.viewData();
            break;
        default:
            break;
        }
    }
    SetConsoleCP(866);
    if (!std::cin.eof() && !std::cin.fail() && std::cin.good() && !std::cin.bad()) {
        std::cin.clear();
    }
}
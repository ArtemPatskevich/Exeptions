#include "FileHandler.h"

void FileHandler::addData(const Exhibition& data)
{
    database.push_back(data);
    printData();
}

void FileHandler::viewData()
{
    std::cout.setf(std::ios::left, std::ios::adjustfield);
    std::cout.width(20);
    std::cout << "Name";
    std::cout.width(30);
    std::cout << "Location" << std::endl;

    for (const auto& data : database) {
        std::cout.width(20);
        std::cout << data.GetName() << " ";
        std::cout.width(30);
        std::cout << data.GetLocation() << std::endl;
    }

    std::cout.unsetf(std::ios::adjustfield);
}

void FileHandler::printData()
{
    std::ofstream file(filename);
    file.setf(std::ios::left, std::ios::adjustfield);
    file.width(20);
    file << "Name";
    file.width(30);
    file << "Location" << std::endl;

    for (const auto& data : database) {
        file.width(20);
        file << data.GetName() << " ";
        file.width(30);
        file << data.GetLocation() << std::endl;
    }

    file.unsetf(std::ios::adjustfield);
}


void FileHandler::deleteData(string name)
{
    database.erase(remove_if(database.begin(), database.end(), [name](Exhibition a){return a.GetName() == name; }), database.end());
    printData();
}

void FileHandler::editData(string name, string newLocation)
{
    for (auto & data : database) {
        if (data.GetName() == name) {
            data.SetLocation(newLocation);
        }
    }
    printData();
}

Exhibition* FileHandler::searchData(string name)
{
    for (auto& data : database) {
        if (data.GetName() == name) {
            return &data;
        }
    }
    return nullptr;
}

void FileHandler::sortData()
{
    sort(database.begin(), database.end(), [](Exhibition a, Exhibition b) {return a.GetName() < b.GetName(); });
    printData();
}

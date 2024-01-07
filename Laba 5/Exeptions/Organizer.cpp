#include "Organizer.h"

Organizer::Organizer(string _name, vector<Exhibition*>& _organizedExhibitions) : Person(_name), organizedExhibitions(_organizedExhibitions)
{
}

ostream& operator<<(ostream& os, const Organizer& other)
{
    os << "Имя: " << other.name;
    return os;
}

istream& operator>>(istream& is, Organizer& other)
{
    cout << "Введите имя организатора: ";
    is >> other.name;
    return is;
}

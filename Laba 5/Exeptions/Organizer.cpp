#include "Organizer.h"

Organizer::Organizer(string _name, vector<Exhibition*>& _organizedExhibitions) : Person(_name), organizedExhibitions(_organizedExhibitions)
{
}

ostream& operator<<(ostream& os, const Organizer& other)
{
    os << "���: " << other.name;
    return os;
}

istream& operator>>(istream& is, Organizer& other)
{
    cout << "������� ��� ������������: ";
    is >> other.name;
    return is;
}

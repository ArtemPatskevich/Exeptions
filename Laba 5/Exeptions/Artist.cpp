#include "Artist.h"

Artist::Artist(string _name) : Person(_name)
{
}

Artist::Artist(const Artist& other)
{
	name = other.name;
}

ostream& operator<<(ostream& os, const Artist& other)
{
	os << "���: " << other.name << endl;
	return os;
}

istream& operator>>(istream& is, Artist& other)
{
	cout << "������� ��� ������: ";
	other.name = "";
	is >> other.name;
	return is;
}

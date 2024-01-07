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
	os << "Имя: " << other.name << endl;
	return os;
}

istream& operator>>(istream& is, Artist& other)
{
	cout << "Введите имя автора: ";
	other.name = "";
	is >> other.name;
	return is;
}

#include "Artwork.h"

Artwork::Artwork(string _title, Artist& _artist, int _year) : title(_title), year(_year), artist(_artist)
{
}

void Artwork::SetYear(int _year)
{
	year = _year;
}

int Artwork::GetYear()
{
	return year;
}

ostream& operator<<(ostream& os, const Artwork& other)
{
	os << "Название: " << other.title << endl;
	os << "Год создания: " << other.year << endl;
	os << "Автор: " << other.artist << endl;
	return os;
}

istream& operator>>(istream& is, Artwork& other)
{
	cout << "Введите название произведения искусства: ";
	other.title = "";
	is >> other.title;
	cout << "Введите год создания(<1 - исключение): ";
	is >> other.year;
	is >> other.artist;
	return is;
}

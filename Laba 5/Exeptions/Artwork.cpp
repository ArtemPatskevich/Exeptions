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
	os << "��������: " << other.title << endl;
	os << "��� ��������: " << other.year << endl;
	os << "�����: " << other.artist << endl;
	return os;
}

istream& operator>>(istream& is, Artwork& other)
{
	cout << "������� �������� ������������ ���������: ";
	other.title = "";
	is >> other.title;
	cout << "������� ��� ��������(<1 - ����������): ";
	is >> other.year;
	is >> other.artist;
	return is;
}

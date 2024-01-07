#include "Visitor.h"

Visitor::Visitor(string _name, vector<Exhibition*>& _visitedExhibitions) : Person(_name), visitedExhibitions(_visitedExhibitions)
{
}

ostream& operator<<(ostream& os, const Visitor& other)
{
	os << "���: " << other.name;
	return os;
}

istream& operator>>(istream& is, Visitor& other)
{
	cout << "������� ��� ����������: ";
	is >> other.name;
	return is;
}

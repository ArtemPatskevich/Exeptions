#include "Exhibition.h"

Exhibition::Exhibition(string _name, string _location, vector<Artwork*>& _artworks) : name(_name), location(_location), 
artworks(_artworks)
{
	//cout << "Вызван конструктор класса Exhibition" << endl;
	if (_name.empty()) {
		throw int();
	}
	if (_location.empty()) {
		throw int();
	}
}

Exhibition::~Exhibition()
{
	//cout << "Вызван деструктор класса Exhibition" << endl;
}

void Exhibition::AddArtwork(Artwork* artwork)
{
	artworks.push_back(artwork);
}

string Exhibition::GetName() const
{
	return name;
}

void Exhibition::SetName(string _name)
{
	name = _name;
}

string Exhibition::GetLocation() const
{
	return location;
}

void Exhibition::SetLocation(string _location)
{
	location = _location;
}

vector<Artwork*>& Exhibition::GetArtworks()
{
	return artworks;
}

bool Exhibition::operator==(const Exhibition& other) const
{
	if (name != other.name || location != other.location || artworks.size() != other.artworks.size()) return false;
	for (int i = 0; i < artworks.size(); i++) {
		if (artworks[i] != other.artworks[i]) return false;
	}
	return true;
}

ostream& operator<<(ostream& os, const Exhibition& other)
{
	os << "Название выставки: " << other.name << endl;
	os << "Место проведения выставки: " << other.location << endl;
	os << "Произведения искусства на выставке: " << endl;
	for (int i = 0; i < other.artworks.size(); i++) {
		os << *(other.artworks[i]);
	}
	return os;
}

istream& operator>>(istream& is, Exhibition& other)
{
	cout << "Введите название выставки: " << endl;
	other.name = "";
	getline(cin, other.name);
	is >> other.name;
	cout << "Введите место проведения выставки: ";
	is >> other.location;
	other.artworks.clear();
	int choice;
	while (true) {
		choice = -1;
		cout << "0 - Выход" << endl;
		cout << "1 - Добавить произведение искусства" << endl;
		while (choice < 0 || choice > 1) {
			cout << "Введите цифру 0 или 1: ";
			is >> choice;
		}
		if (choice == 0) {
			break;
		}
		else {
			Artwork* temp = new Artwork;
			is >> *temp;
			other.AddArtwork(temp);
		}
	}
	return is;
}

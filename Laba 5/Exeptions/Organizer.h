#pragma once
#include "Person.h"
#include "Exhibition.h"
#include <vector>
using namespace std;
class Organizer : public Person
{
	vector<Exhibition*> organizedExhibitions;
public:
	Organizer() = default;
	Organizer(string, vector<Exhibition*>&);
	friend ostream& operator<<(ostream&, const Organizer&);
	friend istream& operator>>(istream&, Organizer&);
};


#pragma once
#include "Person.h"
#include "Exhibition.h"
#include <vector>
using namespace std;
class Visitor : public Person
{
	vector<Exhibition*> visitedExhibitions;
public:
	Visitor() = default;
	Visitor(string, vector<Exhibition*>&);
	friend ostream& operator<<(ostream&, const Visitor&);
	friend istream& operator>>(istream&, Visitor&);
};


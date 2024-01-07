#pragma once
#include "Person.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Artist : public Person
{
	//vector<Artwork*> artworks;
public:
	Artist() = default;
	Artist(string);
	Artist(const Artist&);
	friend ostream& operator<<(ostream&, const Artist&);
	friend istream& operator>>(istream&, Artist&);
};


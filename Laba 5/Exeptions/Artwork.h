#pragma once
#include "Artist.h"
#include <string>
#include <iostream>
using namespace std;
class Artwork
{
    string title;
    Artist artist;
    int year;
public:
    Artwork() = default;
    Artwork(string, Artist&, int);
    friend ostream& operator<<(ostream&, const Artwork&);
    friend istream& operator>>(istream&, Artwork&);
    void SetYear(int);
    int GetYear();
};


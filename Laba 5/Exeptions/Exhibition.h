#pragma once
#include "Artwork.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Exhibition
{
    string name;
    string location;
public:
    vector<Artwork*> artworks;
    Exhibition() = default;
    Exhibition(string, string, vector<Artwork*>&);
    ~Exhibition();
    void AddArtwork(Artwork*);
    string GetName() const;
    void SetName(string);
    string GetLocation() const;
    void SetLocation(string);
    vector<Artwork*>& GetArtworks();
    bool operator==(const Exhibition&) const;
    friend ostream& operator<<(ostream&, const Exhibition&);
    friend istream& operator>>(istream&, Exhibition&);
};


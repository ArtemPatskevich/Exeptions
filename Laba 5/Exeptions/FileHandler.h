#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Exhibition.h"
#include <algorithm>
class FileHandler
{
	string filename;
	vector<Exhibition> database;
public:
	FileHandler(const std::string& filename) : filename(filename) {}
	void addData(const Exhibition& data);
	void viewData();
	void printData();
	void deleteData(string name);
	void editData(string name, string newLocation);
	Exhibition* searchData(string name);
	void sortData();
};


#pragma once
#include <exception>
#include <string>
using namespace std;
class MyException : public exception {
    string message;
public:
    MyException(const std::string& msg) : message(msg) {}
    virtual const char* what() const throw() {
        return message.c_str();
    }
};


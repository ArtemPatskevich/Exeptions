#pragma once
#include <string>
using namespace std;
class FlightBooking
{
	string destination;
	int flightNumber;
public:
	FlightBooking(const std::string& destination, int flightNumber)
		: destination(destination), flightNumber(flightNumber) {}

    const std::string& getDestination() const {
        return destination;
    }

    int getFlightNumber() const {
        return flightNumber;
    }

    void setDestination(const std::string& destination) {
        this->destination = destination;
    }

    void setFlightNumber(int flightNumber) {
        this->flightNumber = flightNumber;
    }
};


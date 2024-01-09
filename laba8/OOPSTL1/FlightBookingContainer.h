#pragma once
#include <iostream>
#include <queue>
#include <fstream>
#include <algorithm>
#include "FlightBooking.h"
class FlightBookingContainer
{
	std::queue<FlightBooking> bookings;
public:
    void add(const FlightBooking& booking) {
        bookings.push(booking);
    }

    void remove() {
        bookings.pop();
    }

    void printFront() const {
            std::cout << "����� ����������: " << bookings.front().getDestination()
                << ", ����� �����: " << bookings.front().getFlightNumber() << std::endl;
    }

    void printBack() const {
        std::cout << "����� ����������: " << bookings.back().getDestination()
            << ", ����� �����: " << bookings.back().getFlightNumber() << std::endl;
    }

    void saveToFileFront(const std::string& filename) const {
        std::ofstream file(filename);
            file << "����� ����������: " << bookings.front().getDestination()
                << ", ����� �����: " << bookings.front().getFlightNumber() << std::endl;
    }

    void saveToFileBack(const std::string& filename) const {
        std::ofstream file(filename);
        file << "����� ����������: " << bookings.front().getDestination()
            << ", ����� �����: " << bookings.front().getFlightNumber() << std::endl;
    }
};


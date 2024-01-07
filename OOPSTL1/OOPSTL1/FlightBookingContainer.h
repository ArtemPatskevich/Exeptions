#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include "FlightBooking.h"
using namespace std;
class FlightBookingContainer
{
	vector<FlightBooking> bookings;
public:
    void add(const FlightBooking& booking) {
        bookings.push_back(booking);
    }

    void remove(int index) {
        bookings.erase(bookings.begin() + index);
    }

    void edit(int index, const FlightBooking& booking) {
        bookings[index] = booking;
    }

    void print() const {
        for (const auto& booking : bookings) {
            std::cout << "Пункт назначения: " << booking.getDestination()
                << ", номер рейса: " << booking.getFlightNumber() << std::endl;
        }
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream file(filename);
        for (const auto& booking : bookings) {
            file << "Пункт назначения: " << booking.getDestination()
                << ", номер рейса: " << booking.getFlightNumber() << std::endl;
        }
    }

    void sort() {
        std::sort(bookings.begin(), bookings.end(),[](FlightBooking a, FlightBooking b)
            {
               return a.getFlightNumber() < b.getFlightNumber();
            });
    }

    int find(int flightNumber) const {
        for (size_t i = 0; i < bookings.size(); ++i) {
            if (bookings[i].getFlightNumber() == flightNumber) {
                return i;
            }
        }
        return -1;
    }
};


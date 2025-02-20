#include <iostream>
#include "date.h"


void Date::init(std::string dateIn) {
	setDate(dateIn);
}

void Date::printDate() {
	std::cout << "\n" + getDate();
}

void Date::setDate(std::string dateIn) { date = dateIn; }
std::string Date::getDate() { return date; }

std::string date;

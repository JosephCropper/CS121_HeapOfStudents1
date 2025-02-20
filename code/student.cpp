#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "student.h"

void Student::init(std::string studentStringIn)
{
	std::stringstream strStream(studentStringIn);
	std::vector<std::string> input;
	while (strStream.good()) {
		std::string substring;
		std::getline(strStream, substring, ',');
		input.push_back(substring);
	}

	setFirstName(input[0]);
	setLastName(input[1]);
	setCreditHours(std::stoi(input[8]));

	address.init(input[2], input[3], input[4], input[5]);
	birthDay.init(input[6]);
	gradDay.init(input[7]);
}

void Student::printStudent() {
	std::cout << "\n" + getFirstName() + " " +
		getLastName() + " ";
	address.printAddress();
	birthDay.printDate();
	gradDay.printDate();
	std::cout << "\nCredits: " + (std::to_string(getCreditHours()));
}

std::string Student::getLastFirst() { return (getLastName() + ", " + getFirstName()); }
std::string Student::getFirstName() { return firstName; }
std::string Student::getLastName() { return lastName; }
int Student::getCreditHours() { return creditHours; }

void Student::setFirstName(std::string firstNameIn) { firstName = firstNameIn; }
void Student::setLastName(std::string lastNameIn) { lastName = lastNameIn; }
void Student::setCreditHours(int creditHoursIn) { creditHours = creditHoursIn; }

std::string firstName;
std::string lastName;
int creditHours;

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "student.h"

void testAddress();
void testDate();
void testStudent();
void init();
bool prompt();
std::vector<Student*> studentVec;

int main() {
	std::cout << "Hello!" << std::endl;
	testAddress();
	testDate();
	testStudent();
	init();
	while (prompt()) {
		std::cout << "\n---\n";
	}
	return 0;

} // end main

void testAddress() {
	Address a;
	a.init("123 W Main St", "Muncie", "IN", "47303");
	a.printAddress();
} // end testAddress

void testDate() {
	Date d;
	d.init("01/27/1997");
	d.printDate();
} // end testDate

void testStudent() {
	std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
	Student* student = new Student();
	student->init(studentString);
	student->printStudent();
	std::cout << std::endl;
	std::cout << student->getLastFirst();
	delete student;
} // end testStudent

void init() {

	using namespace std;
	ifstream inFile("Data.csv");
	string line;
	int i = 0;

	while (getline(inFile, line)) {
		studentVec.push_back(new Student());
		studentVec.at(i)->init(line);
		i++;
	}
}

bool prompt() {
	int input;
	std::cout << "\n0) quit\n1) print all name\n2) print all data\n3) find student\n~-<->-~ ";
	std::cin >> input;
	switch (input) {
	case 0:
		std::cout << "quitting...";
		studentVec.clear();
		return false;
		break;
	case 1:
		for (int i = studentVec.size(); i--; i >= 0) {
			std::cout << studentVec.at(i)->getLastFirst() << "\n";
		}
		break;
	case 2:
		for (int i = studentVec.size(); i--; i >= 0) {
			studentVec.at(i)->printStudent();
				std::cout << "\n ~-<|\\-/|>-~\n";
		}
		break;
	case 3:
		std::cout << "student last name: ";
		std::string lastNameInput;
		std::cin >> lastNameInput;
		for (int i = studentVec.size(); i--; i >= 0) {
			if (studentVec.at(i)->getLastName().compare((" " + lastNameInput)) == 0) {
				studentVec.at(i)->printStudent();
			}
		}
		break;
	}
	return true;
}


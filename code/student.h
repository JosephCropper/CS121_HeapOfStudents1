#ifndef STUDENT_H
#define STUDENT_H

#include "address.h"
#include "date.h"

class Student {
public:
	Address address;
	Date birthDay;
	Date gradDay;

	Student(): address(), birthDay(), gradDay() {}

	void init(std::string studentStringIn);
	void printStudent();
	
	std::string getLastFirst();
	std::string getFirstName();
	std::string getLastName();
	int getCreditHours();

	void setFirstName(std::string firstNameIn);
	void setLastName(std::string lastNameIn);
	void setCreditHours(int creditHoursIn);

private:
	std::string firstName;
	std::string lastName;
	int creditHours;
};

#endif

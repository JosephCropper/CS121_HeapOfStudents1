#ifndef	DATE_H
#define DATE_H

class Date {
public:
	void init(std::string dateIn);
	void printDate();

	std::string getDate();

	void setDate(std::string dateIn);
private:
	std::string date;
};

#endif

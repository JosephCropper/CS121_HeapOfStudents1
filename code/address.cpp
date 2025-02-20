#include <iostream>
#include "address.h"

void Address::init(
	std::string addressIn,
	std::string cityIn,
	std::string stateIn,
	std::string zipIn)
{
	setAddress(addressIn);
	setCity(cityIn);
	setState(stateIn);
	setZip(zipIn);
}

void Address::printAddress() {
	std::cout << "\n" + getAddress() + " " +
		getCity() + " " +
		getState() + " " +
		getZip();
}

std::string Address::getAddress() { return address; }
std::string Address::getCity() { return city; }
std::string Address::getState() { return state; }
std::string Address::getZip() { return zip; }

void Address::setAddress(std::string addressIn) { address = addressIn; }
void Address::setCity(std::string cityIn) { city = cityIn; }
void Address::setState(std::string stateIn) { state = stateIn; }
void Address::setZip(std::string zipIn) { zip = zipIn; }

std::string address;
std::string city;
std::string state;
std::string zip;

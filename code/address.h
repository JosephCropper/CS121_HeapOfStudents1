#ifndef	ADDRESS_H
#define ADDRESS_H

class Address {
	public:
		void init(
			std::string addressIn,
			std::string cityIn,
			std::string stateIn,
			std::string zipIn
		);

		void printAddress();

		std::string getAddress();
		std::string getCity();
		std::string getState();
		std::string getZip();

		void setAddress(std::string addressIn);
		void setCity(std::string cityIn);
		void setState(std::string stateIn);
		void setZip(std::string zipIn);
	private:
		std::string address;
		std::string city;
		std::string state;
		std::string zip;
};

#endif

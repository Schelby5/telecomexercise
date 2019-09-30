#pragma once
#include <iostream>
#include "Packet.h"
#include "Date.h"

class Contract
{
public:
	Contract();
	~Contract();

	friend std::ostream & operator <<(std::ostream &output, const Contract &value);
	friend std::istream & operator >>(std::istream &input, Contract &value);

	//friend std::ostream();
	//friend std::istream();

private:
	std::string _name;
	int length;
	Date* _startDate;
	Date*_endDate;

	Packet* _packet;
};


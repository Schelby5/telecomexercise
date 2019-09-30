#include "Contract.h"




Contract::Contract()
{
}


Contract::~Contract()
{
	if (_startDate != nullptr)
	{
		delete _startDate;
		_startDate = nullptr;
	}
	if (_endDate != nullptr)
	{
		delete _endDate;
		_endDate = nullptr;
	}
	if (_packet != nullptr)
	{
		delete _packet;
		_packet = nullptr;
	}
}

std::ostream & operator<<(std::ostream & output, const Contract & value)
{
	output >> value._startDate;
}

std::istream & operator>>(std::istream & input, Contract & value)
{
	// TODO: insert return statement here
}

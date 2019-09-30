#pragma once
#include < iostream>
#include "Date.h" 
#include "Packet.h"


class Contract
{
public:
	Contract();
	~Contract();


private:
	std::string _name;
	int _length;
	Date* _startDate;
	Date* _endDate;

	Packet* _packet;
};


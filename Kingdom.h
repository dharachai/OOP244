/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.h
// Version 1.0
// Date September 20, 2018
// Author Dennapa Harachai
// Description OOP244 section B at home part
// Student number 153369178
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
// 
///////////////////////////////////////////////////////////
***********************************************************/

// TODO: header safeguards
#ifndef SICT_KINGDOM_H
#define SICT_KINGDOM_H

#include <iostream>
using namespace std;

namespace sict {
	
	struct Kingdom
	{
		char m_name[32];
		int m_population;
	};

	void display(const Kingdom& jekky);
    void display(Kingdom const pKingdom[], int countK);
	
}
#endif

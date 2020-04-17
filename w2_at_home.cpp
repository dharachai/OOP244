/***********************************************************
// Workshop 2: Dynamic Memory
// File w2_in_lab.cpp
// Version 2.0
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

#include <iostream>
#include "Kingdom.h"

using namespace std;
using namespace sict;

void read(sict:: Kingdom&);

int main() {
	int count = 0; 

	Kingdom* pKingdom = nullptr;

	cout << "==========\n"
		<< "Input data\n"
		<< "==========\n"
		<< "Enter the number of Kingdoms: ";
	cin >> count;
	cin.ignore();

	if (count < 1) return 1;

	
	pKingdom = new Kingdom[count]; // created and inicialized pKingdom pointer

	for (int i = 0; i < count; ++i) {
		cout << "Kingdom #" << i + 1 << ": " << endl;
		
		Kingdom& jekKingdom = pKingdom[i]; // 
		read(jekKingdom); // we call read function to accept user input here.
	}
	cout << "==========" << endl << endl;
    
	cout << "------------------------------" << endl
		<< "The 1st kingdom entered is" << endl
		<< "------------------------------" << endl;
    sict:: display(pKingdom[0]); // call sict:: display(); here
	cout << "------------------------------" << endl << endl;
    // expand the array of Kingdoms by 1 element
    
    Kingdom *newKingdom = nullptr; // allocate dynamic memory for count + 1 Kingdoms
    newKingdom = new Kingdom[count+1];
    
    for (int i = 0; i<count; i++){ // copy elements from original array into this newly allocated array
        newKingdom[i]=pKingdom[i];
    }
    
    // deallocate the dynamic memory for the original array
    delete[] pKingdom;
    
    //copy the address of the newly allocated array into pKingdom pointer
    pKingdom = newKingdom;
    
    // add the new Kingdom
    cout << "==========\n"
    << "Input data\n"
    << "==========\n"
    << "Kingdom #" << count + 1 << ": " << endl;
    // TODO: accept input for the new element in the array.
     count++;
    Kingdom& freshKingdom = newKingdom[count-1]; // call read () to do so.
    read(freshKingdom);
    cout << "==========\n" << endl;
    
    // testing that the overload of "display(...)" works
    display(pKingdom, count);
    cout << endl;
	
	delete[] pKingdom; // deallocate dynamic array
	return 0;
}

// accept data input from user.
void read(Kingdom& kingdom) {

	cout << "Enter the name of the Kingdom: ";
	cin.get(kingdom.m_name, 32, '\n');
	cin.ignore(2000, '\n');
	cout << "Enter the number of people living in " << kingdom.m_name << ": ";
	cin >> kingdom.m_population;
	cin.ignore(2000, '\n');
}

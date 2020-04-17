/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
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

#include <iostream>
#include "Kingdom.h"

using namespace std;
namespace sict {
    
	void display(const Kingdom& jekky) { // displaying output to show name and population of the kingdom user input.
        cout<<jekky.m_name<<", pupulation "<<jekky.m_population<<endl;
		//cout << "------------------------------" << endl;
	}
    
    void display(Kingdom const pKingdom[], int countK) { // this function calculates total population of all kingdoms and show array of the information on the screen.
        int total = 0;
        cout << "------------------------------" << endl;
        cout<<"Kingdoms of SICT"<<endl;
        cout << "------------------------------" << endl;
        for (int i=0; i<countK; i++){
            cout<<i+1<<". "<<pKingdom[i].m_name<<", population "<<pKingdom[i].m_population<<endl;
        }
        
        cout << "------------------------------" << endl;
        //next cal total number of population
       for (int i=0; i<countK; i++){
        total = total+pKingdom[i].m_population;
       }
         cout<< "Total population of SICT: "<<total<<endl;
        cout << "------------------------------" << endl;
    }
}

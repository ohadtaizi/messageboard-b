#pragma once


#include <iostream>
#include "Direction.hpp"

using namespace std;
#include <map>
#include <string>


namespace ariel{
 class Board{
public:
	unsigned int C=0;
	unsigned int R=0;
	std::map<unsigned int ,map<unsigned int, string>> board;
    
void post(unsigned int row, unsigned int column, Direction dil , string str);

string read(unsigned int row, unsigned int column, Direction dil, unsigned int length);
 void show();

};

}
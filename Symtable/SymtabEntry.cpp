/*
 * SymtabEntry.cpp
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#include "SymtabEntry.h"

/*SymtabEntry::SymtabEntry() {
	// TODO Auto-generated constructor stub

}*/

Information SymtabEntry::getInfo()
{
	return this->info;
}

void SymtabEntry::setInfo(char *lexem, TokenType::TokenType type)
{
	this->info.setLexem(lexem);
	this->info.seTokenType(type);
}

SymtabEntry::SymtabEntry(Information info)
{
	this->info = info;
}

SymtabEntry::~SymtabEntry() {
	// TODO Auto-generated destructor stub
}


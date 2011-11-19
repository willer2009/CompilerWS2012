/*
 * SymtabEntry.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef SYMTABENTRY_H_
#define SYMTABENTRY_H_

#include "Information.h"
#include "../GlobalTypes/TokenType.h"

class SymtabEntry {
private:
	Information info;
public:
	SymtabEntry(Information info);
	Information getInfo();
	void setInfo(char* lexem, TokenType::TokenType type);
	virtual ~SymtabEntry();
};

#endif /* SYMTABENTRY_H_ */

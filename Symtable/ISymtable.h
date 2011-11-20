/*
 * ISymtable.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef ISYMTABLE_H_
#define ISYMTABLE_H_

#include "Information.h"
#include "../GlobalTypes/TokenType.h"
#include "ListElement.h"

class ISymtable{
public:
	/**
	 * insert a lexem with his type in the hashtable
	 */
	virtual int insert(char* lexem, TokenType::TokenType type) = 0;

	/**
	 * search the information about a given lexem in the hashtable
	 */
	virtual Information lookup(const char* lexem) = 0;

	virtual ~ISymtable(){}
};



#endif /* ISYMTABLE_H_ */

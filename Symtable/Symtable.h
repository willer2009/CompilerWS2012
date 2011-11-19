/*
 * Symtable.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef SYMTABLE_H_
#define SYMTABLE_H_



#include "ISymtable.h"
#include "StringTab.h"
#include "SymtabEntry.h"
#include "HelpClass.h"
#include "List.h"
#include "../GlobalTypes/TokenType.h"
#include "ListElement.h"

class Symtable{
//	class Symtable : public ISymtable{
private:
	StringTab stringTab;
	List* hashtable[ENTRIES_NUMBER];
	int hashcode(const char* key, int length);
public:
	Symtable();
	virtual ~Symtable();
//	virtual int insert(char* lexem, TokenType::TokenType type);
	virtual int insert(char* lexem, TokenType::TokenType type);
	virtual Information lookup(const char* lexem);
	void initSymbols();


};

#endif /* SYMTABLE_H_ */

/*
 * Symtable.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef SYMTABLE_H_
#define SYMTABLE_H_

/**
 * this class represents our hash table and encapsulates all the mechanisms to store all the lexem of our program
 */

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
	/**
	 * represent the list of node where our lexem are really stored
	 */
	StringTab stringTab;
	/**
	 * the hashtable where the information on the lexem are stored
	 */
	List* hashtable[ENTRIES_NUMBER];

	/**
	 * return the hash code of a given lexem with his length
	 */
	int hashcode(const char* key, int length);

	/**
	 * initialise the hashtable with the keywords of the program and their types
	 */
	void initSymbols();
public:
	Symtable();
	virtual ~Symtable();
//	virtual int insert(char* lexem, TokenType::TokenType type);
	/**
	 * insert a lexem with his type in our hash table
	 */
	virtual int insert(char* lexem, TokenType::TokenType type);
	/**
	 * return the information(type) about a given lexem
	 */
	virtual Information lookup(const char* lexem);


};

#endif /* SYMTABLE_H_ */

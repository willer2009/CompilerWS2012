/*
 * Symtable.cpp
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#include "Symtable.h"
#include <iostream>
#include <stdio.h>

Symtable::Symtable() {
	// TODO Auto-generated constructor stub
	for(int i = 0; i < ENTRIES_NUMBER; i++){
		this->hashtable[i] = new List();
	}
	this->initSymbols();
}

Symtable::~Symtable() {
	// TODO Auto-generated destructor stub
}

/*
int Symtable::insert(char *lexem, TokenType::TokenType type)
{
	int length = HelpClass::getLength(lexem);
	int pos = hashcode(lexem, length);
	if(!this->hashtable[pos]->contains(lexem)){
		char* newLexem = this->stringTab.insert(lexem, length);
		this->hashtable[pos]->addElement(new ListElement(new SymtabEntry(Information(newLexem, type))));
	}
	return pos;
}
*/

int Symtable::insert(char *lexem, TokenType::TokenType type)
{
	ListElement* el = NULL;
	int length = HelpClass::getLength(lexem);
	int pos = hashcode(lexem, length);
	if(!this->hashtable[pos]->contains(lexem)){
		char* newLexem = this->stringTab.insert(lexem, length);
		el = new ListElement(new SymtabEntry(Information(newLexem, type)));
		this->hashtable[pos]->addElement(el);
		//printf("insert: %s\n", lexem);
		//std::cout << "insert: "+ lexem;
	}else{
		//printf("already there: %s\n", lexem);
		//std::cout << "already there: "+ lexem;
	}
	return pos;
}


int Symtable::hashcode(const char *key, int length)
{
	return (key[0] + 11 * key[length - 1] + 26 * length) % ENTRIES_NUMBER;
}

Information Symtable::lookup(const char* lexem)
{
	int pos =  hashcode(lexem, HelpClass::getLength(lexem));
	if(this->hashtable[pos]->contains(lexem)){
		ListElement* tmp = this->hashtable[pos]->getFirst();
		while(tmp->getNextElement() != 0){
			if(HelpClass::compare(tmp->getElement()->getInfo().getLexem(), lexem)){
				//printf("string found: %s\n", lexem);
				return tmp->getElement()->getInfo();

				}
			tmp = tmp->getNextElement();
		}

		//das letzte Element auch testen, weil die While-Schleife überprüft es nicht
		if(HelpClass::compare(tmp->getElement()->getInfo().getLexem(), lexem)){
			//printf("string found: %s\n", lexem);
			return tmp->getElement()->getInfo();
		}
	}
	//printf("string not found: %s\n", lexem);
	Information inf;
	return inf;
}

void Symtable::initSymbols(){
	this->insert("print", TokenType::PRINT);
	this->insert("read", TokenType::READ);
	this->insert("int", TokenType::INT);
	this->insert("+", TokenType::PLUS);
	this->insert(";", TokenType::SEMICOLON);
	this->insert("/", TokenType::SLASH);
	this->insert("*", TokenType::ASTERISK);
	this->insert("-", TokenType::MINUS);
	this->insert("=", TokenType::EQUALS);
	this->insert("!", TokenType::EXCLAMATIONMARK);
	this->insert("{", TokenType::L_BRACE);
	this->insert("(", TokenType::L_PARENTHESIS);
	this->insert("[", TokenType::L_SQUAREBRACE);
	this->insert("}", TokenType::R_BRACE);
	this->insert(")", TokenType::R_PARENTHESIS);
	this->insert("]", TokenType::R_SQUAREBRACE);
	this->insert("&", TokenType::AMPERSAND);
	this->insert("<", TokenType::L_BRACKET);
	this->insert(">", TokenType::R_BRACKET);
	this->insert("<=>", TokenType::UNEQUAL);

}




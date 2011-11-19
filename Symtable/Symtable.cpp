/*
 * Symtable.cpp
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#include "Symtable.h"

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
				return tmp->getElement()->getInfo();
				}
			tmp = tmp->getNextElement();
		}

		//das letzte Element auch testen, weil die While-Schleife überprüft es nicht
		if(HelpClass::compare(tmp->getElement()->getInfo().getLexem(), lexem)){
			return tmp->getElement()->getInfo();
		}
	}
	Information inf;
	return inf;
}

void Symtable::initSymbols(){
//	this->insert("print", TokenType::PRINT);
//	this->insert("read", TokenType::READ);
//	this->insert("int", TokenType::INT);
//	this->insert("+", TokenType::PLUS);
//	this->insert(";", TokenType::SEMICOLON);
//	this->insert("/", TokenType::SLASH);
//	this->insert("*", TokenType::SIGN_MULTI);
//	this->insert("-", TokenType::SIGN_MINUS);
//	this->insert("=", TokenType::SIGN_EQUAL);
//	this->insert("!", TokenType::SIGN_EXCLAMATION);
//	this->insert("<", TokenType::SIGN_INFERIOR);
//	this->insert("{", TokenType::SIGN_LEFT_BRACE);
//	this->insert("(", TokenType::SIGN_LEFT_PARENTHESIS);
//	this->insert("[", TokenType::SIGN_LEFT_SQUAREBRACE);
//	this->insert("}", TokenType::SIGN_RIGHT_BRACE);
//	this->insert(")", TokenType::SIGN_RIGHT_PARENTHESIS);
//	this->insert("]", TokenType::SIGN_RIGHT_SQUAREBRACE);
//	this->insert("&", TokenType::SIGN_UND);
//	this->insert("<", TokenType::SIGN_INFERIOR);
//	this->insert(">", TokenType::SIGN_SUPERIOR);
//	this->insert("<=>", TokenType::SIGN_UNEQUAL);

}




/*
 * Information.cpp
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#include "Information.h"

Information::Information(char* lexem, TokenType::TokenType type) {
	// TODO Auto-generated constructor stub
	this->lexem = lexem;
	this->type = type;
}

Information::Information(){

}

char *Information::getLexem() const
{
    return lexem;
}

TokenType::TokenType Information::geTokenType() const
{
    return type;
}

void Information::setLexem(char *lexem)
{
    this->lexem = lexem;
}

void Information::seTokenType(TokenType::TokenType type)
{
    this->type = type;
}

Information::~Information() {
	// TODO Auto-generated destructor stub
}


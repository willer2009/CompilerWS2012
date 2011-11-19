/*
 * Scanner.cpp
 *
 *  Created on: 06.11.2011
 *      Author: sylvain
 */

#include "Scanner.h"
#include <iostream>
#include <stdio.h>
#include "../GlobalTypes/Token.h"
#include "../Symtable/Symtable.h"

using namespace std;

Scanner::Scanner(char* input, char* output)
{
	buffer = new IOBuffer(input, output);
	automat = new Automat(buffer);
	table = new Symtable();
}

Scanner::~Scanner()
{
	delete buffer;
	delete automat;
}

void Scanner::start()
{
	Token* t;
	do
	{
		t = automat->searchLexem();
		if(t->getTokenType() == TokenType::UNKNOWN)
		{
			printf("Error detected! Line: %i (%s)",
					t->getLine(), t->getLexem());
			break;
		}
		else
		{
			printf("TokenType: %-18s Line: %-5iChar: %-5i\tLexem: %s\n",
							tokenTypeToString(t->getTokenType()),
							t->getLine(), t->getColumn(),
							t->getLexem());
			table->insert(t->getLexem(), t->getTokenType());
		}
	}
	while( t != 0);

}

char* Scanner::tokenTypeToString(TokenType::TokenType token){
	switch(token) {
		case TokenType::UNKNOWN:
			return "FehlerToken";
		case TokenType::INTEGER:
			return "Integer";
		case TokenType::IDENTIFIER:
			return "Identifier";
		case TokenType::PLUS:
			return "Plus";
		case TokenType::MINUS:
			return "Minus";
		case TokenType::SLASH:
			return "Slash";
		case TokenType::ASTERISK:
			return "Asterisk";
		case TokenType::L_BRACKET:
			return "LeftBracket";
		case TokenType::R_BRACKET:
			return "RightBracket";
		case TokenType::EQUALS:
			return "Equal";
		case TokenType::EXCLAMATIONMARK:
			return "Exclamationmark";
		case TokenType::AMPERSAND:
			return "Ampersand";
		case TokenType::SEMICOLON:
			return "Semicolon";
		case TokenType::COLON:
			return "Return";
		case TokenType::L_PARENTHESIS:
			return "LeftParenthesis";
		case TokenType::R_PARENTHESIS:
			return "RightParenthesis";
		case TokenType::L_BRACE:
			return "LeftBrace";
		case TokenType::R_BRACE:
			return "RightBrace";
		case TokenType::L_SQUAREBRACE:
			return "LeftSquarebrace";
		case TokenType::R_SQUAREBRACE:
			return "RightSquarebrace";
		case TokenType::UNEQUAL:
			return "Unequal";
		case TokenType::PRINT:
			return "Print";
		case TokenType::READ:
			return "Read";
		case TokenType::OUTOFRANGE:
			return "OutOfRange";
		case TokenType::IF:
			return "If";
		case TokenType::ELSE:
			return "Else";
		case TokenType::WHILE:
			return "While";
		case TokenType::INT:
			return "Int";
		default:
			return "TokenType Unknown";

	}
}



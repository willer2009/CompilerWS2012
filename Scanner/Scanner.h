/*
 * Scanner.h
 *
 *  Created on: 06.11.2011
 *      Author: sylvain
 */

#ifndef SCANNER_H_
#define SCANNER_H_
#include "../Automat/Automat.h"
#include "../IOBuffer/IOBuffer.h"
#include "../Symtable/Symtable.h"

class Scanner {
public:
	Scanner(char* inputFile, char* outpurFile);
	virtual ~Scanner();
	char* tokenTypeToString(TokenType::TokenType token);
	void start();

private:
	Automat*			automat;
	IOBuffer*	 		buffer;
	Symtable*			table;

};

#endif /* SCANNER_H_ */

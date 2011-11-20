/*
 * Information.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef INFORMATION_H_
#define INFORMATION_H_

#include "../GlobalTypes/TokenType.h"
/**
 * class which contain information about the elements(ie. where the element is stored and his type) of our program
 */
class Information {
private:

	/**
	 * address of the string whose Informations are in this class
	 */
    char *lexem;

    /**
     * type of the string which is in this class
     */
    TokenType::TokenType type;
public:
    Information();
    /**
     * constructor with the given string and his type
     */
    Information(char* lexem, TokenType::TokenType type);
    virtual ~Information();
    /**
     * returns the address of the lexem which is stored in this class
     */
    char *getLexem() const;

    /**
     * return the type of the lexem which is stored in this class
     */
    TokenType::TokenType geTokenType() const;

    /**
     * change the value of the lexem in this class
     */
    void setLexem(char *lexem);

    /**
     * change the type of the lexem in this class
     */
    void seTokenType(TokenType::TokenType type);
};

#endif /* INFORMATION_H_ */

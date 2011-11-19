/*
 * Information.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef INFORMATION_H_
#define INFORMATION_H_

#include "../GlobalTypes/TokenType.h"

class Information {
private:
    char *lexem;
    TokenType::TokenType type;
public:
    Information();
    Information(char* lexem, TokenType::TokenType type);
    virtual ~Information();
    char *getLexem() const;

    TokenType::TokenType geTokenType() const;
    void setLexem(char *lexem);
    void seTokenType(TokenType::TokenType type);
};

#endif /* INFORMATION_H_ */

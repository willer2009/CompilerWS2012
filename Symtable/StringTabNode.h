/*
 * StringTabNode.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef STRINGTABNODE_H_
#define STRINGTABNODE_H_

#include "HelpClass.h"
#include "StringTabNode.h"
/**
 * this class represent a node where 65536 character can be stored
 */
class StringTabNode {
private:
	/**
	 * array which contains the stored characters
	 */
    char vector[CHAR_NUMBER];
    /**
     * pointer on the next node
     */
    StringTabNode *next;
public:
    StringTabNode();
    virtual ~StringTabNode();

    StringTabNode *getNext() const;
    char* getVector();
    void setNext(StringTabNode *next);
};

#endif /* STRINGTABNODE_H_ */

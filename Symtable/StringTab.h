/*
 * StringTab.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef STRINGTAB_H_
#define STRINGTAB_H_

#include "string.h"
#include "StringTabNode.h"


class StringTab {
private:
	/**
	 * pointer on the next free space where we can store a lexem
	 */
	char* freeP;
	/**
	 * length of the free space on the current location where we can store a lexem
	 */
	int freeSpace;
	/**
	 * pointer on the first Node where the storage begin
	 */
	StringTabNode* first;
	/**
	 * pointer on the current node where the storage is being doing
	 */
	StringTabNode* currentNode;
public:
	StringTab();
	virtual ~StringTab();
    StringTabNode *getFirst() const;
    char *getFreeP() const;
    int getFreeSpace() const;
    void setFirst(StringTabNode *first);
    void setFreeP(char *freeP);
    void setFreeSpace(int freeSpace);
    /**
     * insert a lexem in the current available free space. if the free space is less than the lexem to store, a new node is created
     */
    char* insert(char* lexem, int size);
};

#endif /* STRINGTAB_H_ */

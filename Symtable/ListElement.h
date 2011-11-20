/*
 * ListElement.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

#ifndef LISTELEMENT_H_
#define LISTELEMENT_H_

#include "SymtabEntry.h"
/**
 * this class represent one element of the list. Each element contains one entry and a pointer on the next list's element
 */
class ListElement {
private:
	/**
	 * element which is contained in the list
	 */
	SymtabEntry* element;
	/**
	 * pointer on the next element
	 */
	ListElement* nextElement;
public:
	ListElement(SymtabEntry* symtabEntry);
	virtual ~ListElement();
    SymtabEntry* getElement() const;
    ListElement *getNextElement() const;
    void setElement(SymtabEntry* element);
    void setNextElement(ListElement *nextElement);
};

#endif /* LISTELEMENT_H_ */

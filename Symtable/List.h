/*
 * List.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */
/**
 * this class contain all the lexems which have the same key
 */

#ifndef LIST_H_
#define LIST_H_

#include "ListElement.h"
#include "HelpClass.h"

class List
{
private:
	/**
	 * first element of the list
	 */
    ListElement *first;
    /**
     * last element of the list
     */
    ListElement *last;
    /**
     * size of the list
     */
    int size;
public:
    List();
    virtual ~List();
    /**
     * add an element in the list
     */
    void addElement(ListElement *element);
    /**
     * return the first element of the list
     */
    ListElement *getFirst() const;
    /**
     * returns the last element of the list
     */
    ListElement *getLast() const;
    /**
     * return the size of the list
     */
    int getSize() const;
    /**
     * set the first element of the list
     */
    void setFirst(ListElement *first);
    /**
     * set the last element of the list
     */
    void setLast(ListElement *last);
    /**
     * set the size of the list
     */
    void setSize(int size);
    /**
     * returns true if the list contains the given lexem and false else
     */
    bool contains(const char* lexem);
};

#endif /* LIST_H_ */

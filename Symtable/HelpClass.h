/*
 * HelpClass.h
 *
 *  Created on: 22.10.2011
 *      Author: sylvain
 */

/**
 * class which offer helps methods and contants for the symbol table part.
 */

#ifndef HELPCLASS_H_
#define HELPCLASS_H_

/**
 * constant which define the longest identifier we can insert in our symbol table,
 * a longer word will not be inserted
 */
#define CHAR_NUMBER 65536

/**
 * constant which represents the number of keys(indexes) of our hash table
 */
#define ENTRIES_NUMBER 2000

class HelpClass{

public:
	/**
	 * return the length of a given string
	 */
	static int getLength(const char* string){
		int length = 0;
		while(string[length] != '\0'){
			length++;
		}
		return length;
	}

	/**
	 * return true if the 2 given string are equal
	 */
	static bool compare(const char* string1, const char* string2){
		int n = getLength(string1);
			if(n == getLength(string2)){
				for(int i = 0;i < n;i++){
					if(string1[i] != string2[i]){
						return false;
					}
				}
				return true;
			}else{
				return false;
			}

		}
};



#endif /* HELPCLASS_H_ */

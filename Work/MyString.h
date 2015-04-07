/*
 * MyString.h
 *
 *  Created on: 08-Apr-2015
 *      Author: kishor
 */

#ifndef MYSTRING_H_
#define MYSTRING_H_

#include<iostream>

class MyString {
public:
	MyString();
	MyString(const char* s);
	MyString(const MyString& s);
	MyString operator = (const MyString&);
	friend std::ostream& operator << (std::ostream &, const MyString&);
	~MyString();
private:
	char* m_str;
	int m_len;
	static int STR_COUNT;
};

#endif /* MYSTRING_H_ */

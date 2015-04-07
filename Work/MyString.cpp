/*
 * MyString.cpp
 *
 *  Created on: 08-Apr-2015
 *      Author: kishor
 */

#include "MyString.h"
#include "MyLogger.h"
#include <iostream>
#include <cstring>

int MyString::STR_COUNT = 0;

MyString::MyString() {
	m_str = NULL;
	m_len = 0;
	STR_COUNT++;
}

MyString::MyString(const char* s) {
	m_len = std::strlen(s);
	m_str = new char[m_len + 1];
	std::strcpy(m_str, s);
	STR_COUNT++;
}

MyString::MyString(const MyString& s) {
	m_len = std::strlen(s.m_str);
	m_str = new char[m_len + 1];
	std::strcpy(m_str, s.m_str);
	STR_COUNT++;
}

MyString::~MyString() {
	delete[] m_str;
}

std::ostream& operator << (std::ostream& out, const MyString& s) {
	out << s.m_str << std::endl;
	return out;
}


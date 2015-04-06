/*
 * Vector.cpp
 *
 *  Created on: 05-Apr-2015
 *      Author: kishor
 */

#include "Vector.h"

template <class Object>
Vector<Object>::Vector(int size) {
	m_data = new Object[size];
	m_capacity = size;
	m_size = 0;
}

template <class Object>
void Vector<Object>::push_back(Object val) {
	m_data[m_size] = val;
	m_size++;
}

template <class Object>
int Vector<Object>::size() {
	return m_size;
}

template <class Object>
int Vector<Object>::capacity() {
	return m_capacity;
}

template <class Object>
void Vector<Object>::resize(int val) {
	Object new_data = new Object[val];
	for(int i=0; i < m_size; i++) {
		new_data[i] = m_data[i];
	}
	delete [] m_data;
	m_data = new_data;
}

template <class Object>
Vector<Object>::~Vector(){
	delete [] m_data;
}

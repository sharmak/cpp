/*
 * Vector.h
 *
 *  Created on: 05-Apr-2015
 *      Author: kishor
 */

#ifndef VECTOR_H_
#define VECTOR_H_

template <class Object>
class Vector {
public:
	Vector(int);
	~Vector();
	void resize(int);
	void push_back(Object);
	void pop_back(Object);
	int size();
	int capacity();
private:
	Object* m_data;
	int m_size;
	int m_capacity;
};

#endif /* VECTOR_H_ */

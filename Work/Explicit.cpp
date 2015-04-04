/*
 * Explicit.cpp
 *
 *  Created on: 05-Apr-2015
 *      Author: kishor
 */

#include <iostream>
#include "Explicit.h"


Explicit::Explicit() {
}

Explicit::Explicit(int val) {
	std::cout << "Calling constructor with integer argument" << std::endl;
}

Explicit::Explicit(double val) {
	std::cout << "Calling constructor with double argument" << std::endl;
}
Explicit::~Explicit() {
	// TODO Auto-generated destructor stub
}


#include <iostream>
#include "Explicit.h"
#include "Vector.h"
#include "Stock.h"
using namespace std;

// Function to test explicit functionality
int explicit_test() {

	// Explicit acts as a safe guard between converting types
	// We should always mention explicit in the constructor
	// to avoid default type getting converted to objects
	// without we knowing about it.
	Explicit e;
	// This works because we don't have
	// explicit keyword in the constructor definition
	e = 5;
	Explicit e1;

	// This will not call the constructor with double argument as
	// double constructor has explicit mentioned in the declaration
	// the best possible match after type casting in calling integer
	// constructor.
	e1 = 5.5;
	return 0;

}

void test_stock() {

	// Create a stock object using default constructor
	Stock s;
	s.printPort();

	// Create a point object to the stock
	Stock* s1 = new Stock("test", 5, 5);
	s1->printPort();
	delete s1;

	// Create a constant object
	const Stock s3("myc", 2, 10);
	// You can only call constant function using const
	// function from const object as this pointer passed
	// is constant.
	s3.printPort();

	// C++11 style initialization
	Stock s4 = {"MyCPP11", 1, 1};
	s4.printPort();

	// Compare two stock pointers showing use of
	// this pointer.
	Stock s5 = s4.compareLot(s3);
	s5.printPort();

	// Create an array of stocks
	Stock mystuff[4] = {
			Stock(),
			Stock(),
			Stock(),
			Stock(),
	};
}

int main() {
	//explicit_test();
	test_stock();

}

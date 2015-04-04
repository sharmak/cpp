#include <iostream>
#include <Explicit.h>
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
int main() {
	explicit_test();

}

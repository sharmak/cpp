/*
 * Time.h
 *
 *  Created on: 07-Apr-2015
 *      Author: kishor
 */

#ifndef TIME_H_
#define TIME_H_
#include <iostream>
class Time {
public:
	Time();
	Time(const int hour, const int minutes);
	void addHour(const int hour);
	void addMinutes(const int minutes);
	Time operator + (const Time& );
	Time operator - (const Time& );
	Time operator * (const int);
	operator int();
	friend Time operator * (const int mult, Time &t )
		{ return t * mult;  }// call overloaded operator
	void show() const;
	friend std::ostream& operator <<  (std::ostream&,  const Time & t) ;
private:
	int m_hour;
	int m_minutes;
};

#endif /* TIME_H_ */

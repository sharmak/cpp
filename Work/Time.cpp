/*
 * Time.cpp
 *
 *  Created on: 07-Apr-2015
 *      Author: kishor
 */

#include "Time.h"
#include <iostream>

Time::Time() {
	m_hour = 0;
	m_minutes = 0;
}

Time::Time(const int hour, const int minutes=0)
{
	m_hour = hour;
	m_minutes = minutes;
}

void Time::addHour(const int hour) {
	m_hour += hour;
}

void Time::addMinutes(const int minutes) {
	m_minutes += minutes;
	m_minutes %= 60;
	m_hour = int(minutes/60);
}

Time Time::operator + (const Time & t) {
	int tot_hours = m_hour + t.m_hour;
	int tot_minutes = m_minutes + t.m_minutes;
	tot_hours += int(tot_minutes)/60;
	tot_minutes %= 60;
	return Time(tot_hours, tot_minutes);
}

Time Time::operator - (const Time & t) {
	int t_tot_minutes = t.m_hour * 60 + t.m_minutes;
	int tot_minutes = m_hour * 60 + m_minutes;
	int diff = tot_minutes - t_tot_minutes;
	return Time(int(diff/60), diff%60);
}

Time Time::operator * (const int fact) {
	m_hour *= fact;
	m_minutes *= fact;
	int hours = m_hour + int(m_minutes / 60);
	return Time(hours, m_minutes%60);
}

void Time::show() const {
	std::cout << " Hours = " << m_hour << std::endl;
	std::cout << " Minutes = " << m_minutes << std::endl;
}

Time::operator int() {
	return m_hour*60 + m_minutes;
}

std::ostream& operator << (std::ostream& out, const Time & t) {
	out << t.m_hour << " hours, " << t.m_minutes << " minutes" << std::endl;
	return out;
}

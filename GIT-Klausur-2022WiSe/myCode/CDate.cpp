/*
 * CDateUtils.cpp
 *
 *  Created on: 21.02.2023
 *      Author: mnl
 */

#include <ctime>
#include <iomanip>
using namespace std;
#include "CDate.h"

CDate::CDate(int year, int month, int day) {
	m_year = year;
	m_month = month;
	m_day = day;
}

CDate::CDate(int year, int dayOfYear) {
	m_year = year;
	struct tm date = { .tm_mday = dayOfYear, .tm_mon = 0,
		.tm_year = year - 1900};
	mktime(&date);
	m_month = date.tm_mon + 1;
	m_day = date.tm_mday;
}

int CDate::dayOfYear() const {
	struct tm date = { .tm_mday = m_day, .tm_mon = m_month - 1,
		.tm_year = m_year - 1900};
	mktime(&date);
	return date.tm_yday + 1;
}

int CDate::day() const {
	return m_day;
}

int CDate::month() const {
	return m_month;
}

int CDate::year() const {
	return m_year;
}

ostream& operator<< (ostream& out, const CDate& date) {
	out << (date.day() < 10 ? "0" : "") << date.day() << "."
			<< (date.month() < 10 ? "0" : "") << date.month()
			<< "." << date.year();
	return out;
}

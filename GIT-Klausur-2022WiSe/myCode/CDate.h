/*
 * CDateUtils.h
 *
 *  Created on: 21.02.2023
 *      Author: mnl
 */

#ifndef CDATE_H_
#define CDATE_H_

#include <ostream>
using namespace std;

/**
 * Repräsentiert ein Datum.
 */
class CDate {
private:
	int m_year;
	int m_month;
	int m_day;

public:
	/**
	 * Erzeugt ein neues Datum mit den angegebenen Werten.
	 *
	 * @param year das Jahr
	 * @param month der Monat (Zählung beginnt bei 1)
	 * @param day der Tag (Zählung beginnt bei 1)
	 */
	CDate(int year, int month, int day);

	/**
	 * Erzeugt ein neues Datum aus den angegebenen Werten.
	 *
	 * @param year das Jahr
	 * @param dayOfYear Tag des Jahres (1 == 1. Januar)
	 */
	CDate(int year, int dayOfYear);

	/**
	 * Berechnet, um den wievielten Tage des Jahres es sich bei
	 * dem Datum handelt (1 == 1. Januar).
	 *
	 * @return Tag des Jahres
	 */
	int dayOfYear() const;

	/**
	 * Liefert den Tag des Datums (1...31).
	 */
	int day() const;

	/**
	 * Liefert den Monat des Datums (1...12).
	 */
	int month() const;

	/**
	 * Liefert das Jahr.
	 */
	int year() const;
};

ostream& operator<< (ostream& out, const CDate& date);

#endif /* CDATE_H_ */

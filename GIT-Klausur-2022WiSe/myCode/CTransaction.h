/*
 * CTransaction.h
 *
 *  Created on: 16.02.2023
 *      Author: mnl
 */

#ifndef CTRANSACTION_H_
#define CTRANSACTION_H_

#include <string>
using namespace std;

/**
 * Beschreibt eine Transaktion (Abbuchung, Gutschrift) auf einem
 * Konto.
 */
class CTransaction {
private:
	/** Jahr, in dem die Transaktion durchgeführt wurde. */
	int m_year;
	/** Tag des Jahres (Zählung beginnt mit 1) an dem die
	 * Transaktion durchgeführt wurde. */
	int m_dayOfYear;
	/** Betrag der Transaktion (positiv: Gutschrift, negativ Abhebung) */
	float m_amount;
	/** Beschreibender Text zur Buchung. */
	string m_comment;

public:
	/**
	 * Initialisert ein neues Objekt mit den
	 * angegebenen Werten. (5 Punkte)
	 *
	 * @param year das Jahr, in dem die Transaktion durchgeführt wurde
	 * @param month der Monat, in dem die Transaktion durchgeführt
	 * wurde (Januar = 1)
	 * @param day der Tag, in dem die Transaktion durchgeführt wurde
	 * (Erster Tag des Monats = 1)
	 * @param amount gebuchter Betrag
	 * @param comment Kommentar zur Buchung
	 */
	CTransaction(int year, int month, int day,
			float amount, string comment);

	/**
	 * Initialisiert ein neues Objekt mit default Werten (alle
	 * Attribute werden auf 0 gesetzt, der Kommnetar auf
	 * Leerstring ""). (4 Punkte)
	 */
	CTransaction();

	/**
	 * Liefert in den Rückgabeparametern die Daten zur Transaktion.
	 * (6 Punkte)
	 *
	 * @param year das Jahr, in dem die Transaktion durchgeführt wurde
	 * @param month der Monat, in dem die Transaktion durchgeführt wurde
	 * (Januar = 1)
	 * @param day der Tag, in dem die Transaktion durchgeführt wurde
	 * (Erster Tag des Monats = 1)
	 * @param comment Kommentar zur Buchung
	 */
	void transactionData(int& year, int& month, int& day,
			float& amount, string& comment) const;
};

#endif /* CTRANSACTION_H_ */

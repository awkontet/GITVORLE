/*
 * CBank.h
 *
 *  Created on: 16.02.2023
 *      Author: mnl
 */

#ifndef CBANK_H_
#define CBANK_H_

#include "CCustomer.h"

class CBank {
private:
	CCustomer** m_customers;

	/**
	 * Liefert die Anzahl der Kunden der Bank.
	 *
	 * @return Anzahl der Kunden
	 */
	int customers() const;

public:
	/**
	 * Erzeugt ein neues Exemplar der Klasse mit Beispieldaten.
	 */
	CBank();

	/**
	 * Liefert einen Zeiger auf den Kunden mit der angegebenen
	 * Nummer. Wenn es keinen Kunden mit der Nummer gibt, wird
	 * 0 zurückgegeben. (4 Punkte)
	 *
	 * @param number die Kundennummer
	 * @return das Modell des Kunden oder 0
	 */
	CCustomer* findCustomer(unsigned int number) const;

};

#endif /* CBANK_H_ */

/*
 * CAccount.h
 *
 *  Created on: 16.02.2023
 *      Author: mnl
 */

#ifndef CACCOUNT_H_
#define CACCOUNT_H_

#include "AccountType.h"
#include "CTransaction.h"

/**
 * Repr�sentiert ein Konto. Attribute sind die Kontonummer,
 * der aktuelle Kontostand und die Liste der Ums�tze
 * (Transaktionen).
 *
 * Die Kontonummer ist 10-stellig. Die erste Stelle (ganz links)
 * gibt an, um welches "Unterkonto" des Kunden es sich handelt
 * (1...9) und ist beim Anlegen eines Kontos frei w�hlbar.
 * Die verbleibenden Stellen werden durch die Kundennummer
 * mit f�hrenden Nullen gebildet. Beispielsweise hat das
 * Konto 2 des Kunden mit der Kundennummer 42 die
 * Kontonummer 2000000042.
 *
 * Technisch gesehen handelt es sich bei der Speicherung der
 * Transaktionen um ein dynamisch wachsendes Array mit einer
 * Anfangsgr��e von 0, das bei Bedarf um 5 Elemente w�chst.
 */
class CAccount {
private:
	/** Die Kontonummer */
	unsigned long m_number;
	/** Typ des Kontos */
	AccountType m_type;
	/** Aktueller Kontostand */
	float m_balance;
	/** Zeiger auf das Array mit Ums�tzen */
	CTransaction* m_transactions;
	/** Anzahl der im aktuell verwendeten Array maximal speicherbaren
	 * Transaktionen */
	int m_maxTransactions;
	/** Anzahl der im verwendeten Array aktuell gespeicherten
	 * Transaktionen */
	int m_currentTransactions;

public:
	/**
	 * Erzeugt ein neues Konto mit der angegebenen Nummer, dem
	 * angegebenen Typ und einer leeren Umsatzliste. (6 Punkte)
	 *
	 * @param number die Kontonummer
	 * @param type Typ des Kontos
	 */
	CAccount(unsigned long number, AccountType type);

	/**
	 * Gibt den vom Objekt verwalteten Speicher frei. (1 Punkt)
	 */
	~CAccount();

	/**
	 * Liefert die Kontonummer. (1 Punkt)
	 */
	unsigned long getNumber() const;

	/**
	 * Liefert den Kontostand. (1 Punkt)
	 */
	float getBalance() const;

	/**
	 * F�gt die angegebene Transaktion zum Konto hinzu (f�hrt die
	 * Buchung durch). Die Transaktion wird gespeichert und der
	 * Kontostand aktualisiert. (8 Punkte)
	 *
	 * @param transaction die hinzuzuf�gende Transaktion
	 */
	void post(CTransaction transaction);

	/**
	 * Berechnet das Guthaben auf dem Konto zum angegebenen
	 * Zeitpunkt (Tagesbeginn).
	 *
	 * Gehen Sie davon aus, dass die Ums�tze nur f�r eine
	 * begrenzte Zeit gespeichert werden. D.h. die Liste der
	 * Ums�tze f�ngt nicht unbedingt mit der Kontoer�ffnung an.
	 *
	 * Sie m�ssen daher f�r die Berechnung vom aktuellen
	 * Kontostand ausgegehen und die Liste der Ums�tze
	 * "r�ckw�rts" abarbeiten, bis Sie zu einer Buchung kommen,
	 * die vor dem angegebenen Zeitpunkt liegt (oder an den
	 * Anfang der Liste). (10 Punkte)
	 *
	 * @param year das Jahr
	 * @param month der Monat (1 == Januar)
	 * @param day der Tag (1. Tag des Monts == 1)
	 */
	float balanceAt(int year, int month, int day) const;

	/**
	 * Gibt die Kontonummer und die Liste der Ums�tze auf der
	 * Konsole aus. Beispiel:
	 *
	 *     Kontonummer: 1000005846
     *     01.01.2022: 2000 (Kontoer�ffnung)
     *     01.01.2022: -1000 (Umbuchung)
	 *
	 * Gibt es auf dem Konto keine Ums�tze, wird das statt der
	 * Ums�tze als Information ausgegeben. Beispiel:
	 *
	 *     Kontonummer: 3705038550
	 *     (Keine Ums�tze)
	 *
	 * (9 Punkte)
	 */
	void print() const;
};

#endif /* CACCOUNT_H_ */

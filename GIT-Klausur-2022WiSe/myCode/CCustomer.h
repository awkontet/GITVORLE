/*
 * CCustomer.h
 *
 *  Created on: 16.02.2023
 *      Author: mnl
 */

#ifndef CCUSTOMER_H_
#define CCUSTOMER_H_

#include <string>
using namespace std;
#include "CAccount.h"

/**
 * Modelliert einen Kunden (der Bank). Ein Kunde hat eine Kundennummer,
 * einen Nach- und einen Vornamen und bis zu fünf Konten.
 */
class CCustomer {
private:
	unsigned int m_number;
	string m_lastName;
	string m_firstName;
	/**
	 * Die Beziehung zu den Konten wird wie folgt verwaltete:
	 *
	 *  * Beim Initialisieren des Objekts wird das Array
	 *    m_accounts mit 0-Zeigern initialisiert.
	 *
	 *  * Beim Hinzufügen eines neuen Kontos wird das Array
	 *    durchsucht bis ein Eintrag gefunden wird, dessen
	 *    Wert 0 ist. In diesem Element wird der Zeiger auf
	 *    das neue Konto gespeichert.
	 *
	 *  * Beim Löschen eines Kontos wird das Array durchsucht,
	 *    bis das zu löschende Konto gefunden wurde. Das
	 *    Konto-Objekt wird gelöscht und in das Array an der
	 *    Stelle der Wert 0 geschrieben, damit der Eintrag
	 *    für ein neues Konto wiederverwendet werden kann.
	 *
	 *  Beachten Sie, dass durch Hinzufügen und Löschen im Array
	 *  damit "Lücken" entstehen können. Werden beispielsweise
	 *  5 Konten angelegt und dann das zweite und dritte gelöscht,
	 *  enthält das Array an den Indexpositionen 0, 3 und 4 (noch)
	 *  Zeiger, an den Indexpositionen 1 und 2 steht aber jeweils 0.
	 */
	CAccount* m_accounts[5];

public:
	/**
	 * Initialisiert ein neues Objekt mit den angegebenen Werten
	 * bzw. Default-Werten. (5 Punkte)
	 *
	 * @param number Kundennummer
	 * @param lastName Nachname des Kunden
	 * @param firstName Vorname des Kunden
	 */
	CCustomer(unsigned int number, string lastName, string firstName);

	/**
	 * Gibt den von den Komponenten (den Teilen) des Objekts
	 * belegten Speicherplatz frei. (3 Punkte)
	 */
	~CCustomer();

	/**
	 * Liefert die Kundenummer. (1 Punkt)
	 *
	 * @return die Kundennummer
	 */
	unsigned int getNumber() const;

	/**
	 * Legt ein neues Konto an. Wie bei der Klasse CAccount
	 * beschrieben, wird die angegebene Unterkontonummer als
	 * höchstwertige Stelle der Kontonummer verwendet, die
	 * verbleibenden 9 Stellen sind die mit führenden Nullen
	 * "aufgefüllte" Kundennummer.
	 *
	 * Gibt es bereits ein Konto mit der gewünschten Nummer
	 * oder hat der Kunde bereits 5 Unterkonten, so gibt die
	 * Methode 0 zurück. (14 Punkte)
	 *
	 * @param subAccount Unterkontonummer (1...9)
	 * @param type der Kontotyp
	 * @return das neue Konto oder 0
	 */
	CAccount* createAccount
		(unsigned short subAccount, AccountType type);

	/**
	 * Löscht das Konto mit der angegebenen Nummer.
	 * Wenn das Konto existiert und der Kontostand nicht
	 * 0 ist, wird false zurückgeliefert, sonst true.
	 * (9 Punkte)
	 *
	 * @param accountNumber die Kontonummer
	 * @return true, wenn das Konto nach dem Aufruf nicht
	 * (mehr) existiert.
	 */
	bool deleteAccount(unsigned long accountNumber);

	/**
	 * Liefert einen Zeiger auf das "index+1"-te Konto des
	 * Kunden. Angenommen, der Kunde hat 3 Konten, so liefert
	 * die Methode Zeiger auf Konten für Aufrufe mit dem
	 * Index 0, 1 und 2. Für Aufrufe mit einem andern Wert
	 * für index liefert die Methode 0. (6 Punkte)
	 *
	 * @param index Index des zu liefernden Kontos
	 */
	CAccount* accountByIndex(int index) const;

	/**
	 * Gibt die Daten des Kunden und alle Kontoumsätze aus.
	 * Beispielausgabe:
	 *
	 *     Kunde: Liddell, Alice
	 *     Kontonummer: 1000005846
	 *     01.01.2022: 2000 (Kontoeröffnung)
	 *     01.01.2022: -1000 (Umbuchung)
	 *     Kontonummer: 3000005846
	 *     01.01.2022: 1000 (Umbuchung)
	 *     01.03.2022: -500 (Katzenfutter)
	 *     Kontonummer: 3705038550
	 *     (Keine Umsätze)
	 *
	 * (7 Punkte)
	 */
	void print() const;
};

#endif /* CCUSTOMER_H_ */

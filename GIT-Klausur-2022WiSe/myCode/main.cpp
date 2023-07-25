// GIT-Labor
// main.h

////////////////////////////////////////////////////////////////////////////////
// Header-Dateien
#include <iostream>		// Header für die Standard-IO-Objekte (z.B. cout, cin)
#include <cstdlib>
// TODO: Fügen Sie hier weitere benötigte Header-Dateien der
// Standard-Bibliothek ein z.B.
#include <string>

using namespace std;	// Erspart den scope vor Objekte der
						// C++-Standard-Bibliothek zu schreiben
						// z.B. statt "std::cout" kann man "cout" schreiben

// Inkludieren Sie hier die Header-Files Ihrer Klassen, z.B.
// #include "CFraction.h"
#include "CBank.h"

// Hauptprogramm
// Dient als Testrahmen, von hier aus werden die Klassen aufgerufen
int main () {
	cout << "Name, Vorname, Matrikelnummer" << endl << endl;

    // TODO: Fügen Sie ab hier Ihren Programmcode ein

	/**
	 * Wenn Sie Ihre Klassen implementiert haben, können Sie den
	 * Code in CBank::CBank aktivieren und die dort generierten
	 * Daten für Test verwenden (optional).
	 */
		CBank bank;
//		CTransaction trans2 (2021,11,13,130.0,"beli baju");
//		CTransaction trans3 (2022,11,10,45.0,"makan");
//		CTransaction trans1 (2020,06,16,22.0,"minum");
//
//		CAccount test(12,CD);
//		test.post(trans1);
//		test.post(trans2);
//		test.post(trans3);
//
//		int balance =test.balanceAt(2022,12,15);
//		cout<<"balance 15.12.2022:" <<balance<<endl;
//		balance =test.balanceAt(2022,1,1);
//			cout<<"balance 1.1.2022:" <<balance<<endl;
//		test.print();
//
//		CCustomer testt(42,"Christina","Maria");
//		testt.createAccount(2, CD);
//		testt.createAccount(3, CD);
//		testt.deleteAccount(4000000042);
//		testt.createAccount(3, CD);
//		testt.createAccount(5, CD);
//		testt.createAccount(1, CD);
//		testt.createAccount(7, CD);
//		testt.deleteAccount(3000000042);
//

	return 0;
}

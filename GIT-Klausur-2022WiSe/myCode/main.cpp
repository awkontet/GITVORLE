// GIT-Labor
// main.h

////////////////////////////////////////////////////////////////////////////////
// Header-Dateien
#include <iostream>		// Header f�r die Standard-IO-Objekte (z.B. cout, cin)
#include <cstdlib>
// TODO: F�gen Sie hier weitere ben�tigte Header-Dateien der
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

    // TODO: F�gen Sie ab hier Ihren Programmcode ein

	/**
	 * Wenn Sie Ihre Klassen implementiert haben, k�nnen Sie den
	 * Code in CBank::CBank aktivieren und die dort generierten
	 * Daten f�r Test verwenden (optional).
	 */
	CBank bank;
	string s= "Hello World";
	cout<<s.substr(s.length()-5)<<endl;

	return 0;
}

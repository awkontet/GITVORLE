// GIT-Labor
// main.h

////////////////////////////////////////////////////////////////////////////////
// Header-Dateien
#include <iostream>		// Header für die Standard-IO-Objekte (z.B. cout, cin)
#include <cstdlib>
// TODO: Fügen Sie hier weitere benötigte Header-Dateien der
// Standard-Bibliothek ein z.B.
// #include <string>
#include"CColor.h"
using namespace std;	// Erspart den scope vor Objekte der
						// C++-Standard-Bibliothek zu schreiben
						// z.B. statt "std::cout" kann man "cout" schreiben

// Inkludieren Sie hier die Header-Files Ihrer Klassen, z.B.
// #include "CFraction.h"


// Hauptprogramm
// Dient als Testrahmen, von hier aus werden die Klassen aufgerufen
/*@startum1
 * class CColor(){
 * -m_r: uint8_t
 * -m_g: unint8_t
 * -m_b: uint8_t
 * +getR(): uint8_t
 * +getG(): uint8_t
 * +getB(): uint8_t
 * +setR()(r: uint8_t):void
 * +setG()(g: uint8_t):void
 * +setB()(b: uint8_t):void
 *
 */
int main ()
{
    // TODO: Fügen Sie ab hier Ihren Programmcode ein
	cout << "Vorle GIT 1 gestartet." << endl << endl;
	CColor myColor;

	return 0;
}

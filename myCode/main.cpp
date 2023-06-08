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
#include"CCd.h"
#include"CCdTitle.h"
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
void g(){
	cout<<"Anfang von g"<< endl;
	CColor sample;

}
void f(){
	cout<<"Anfang von f"<< endl;
	static CColor sample;
	g();
}
void h(int h[42]){
	cout<< sizeof(h)<< endl;
}


int main ()
{
    // TODO: Fügen Sie ab hier Ihren Programmcode ein
	cout << "Vorle GIT 1 gestartet." << endl << endl;
	cout<<"Vor if"<< endl;
	/*if(1==1){
		CColor sample;
		cout<<"Bedingung ist true"<< endl;
	}
	f();
*/
	int a[42];
	cout<< sizeof(a)<< endl;
	h(a);
	cout<<"Nach if"<< endl;

	//CColor myColor;

	//CColor red;
	//red.setR(225);
	//red.setG(0);
	//red.set(0);
	//CCd ledZepplin1;
	// cout<< ledZepplin1.m_titles<<endl;

	//CCd* dynCd= new CCd();
	//cout<<dynCd->m_titles<<endl;
	//ledZepplin1.m_titles=40;

	CCd abba;
	abba.addTitle(CCdTitle ("Waterloo", 165,"Abba","",""));
	abba.addTitle(CCdTitle ("Sitting in the palmtree", 219,"Abba","",""));
	abba.addTitle(CCdTitle ("King Kong Song", 194,"Abba","",""));
	abba.addTitle(CCdTitle ("Hasta Mana", 185,"Abba","",""));
	cout<< abba.numberofTitles()<<endl;
	abba.print();
	return 0;
}


	return 0;
}

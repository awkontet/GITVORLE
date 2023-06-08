/*
 * CCdTitle.h
 *
 *  Created on: Apr 19, 2023
 *      Author: Maria Natasya
 */
#include<iostream>
#include<string>
#ifndef CCDTITLE_H_
#define CCDTITLE_H_
using namespace std;



class CCdTitle
{
private :
	string m_genre; //Variable = behaelter eines Datums
	string m_interpreter;
	string m_title;
	short m_playtime;
	string m_language;

public:
	CCdTitle();
	virtual ~CCdTitle();
	CCdTitle(string title, short playtime, string genre= "Unbekannt", string language = "Unbekannt");
	float getPlaytime();
	bool isInUse();
	void markAsLost();
	bool isLast();
};

#endif /* CCDTITLE_H_ */

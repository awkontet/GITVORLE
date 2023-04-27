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
	string genre; //Variable = behaelter eines Datums
	string interpreter;
	string title;
	float playtime;
	string language;

public:
	CCdTitle();
	virtual ~CCdTitle();
};

#endif /* CCDTITLE_H_ */

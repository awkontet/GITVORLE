/*
 * CCd.h
 *
 *  Created on: Apr 19, 2023
 *      Author: Maria Natasya
 */
#include<iostream>
#include<string>
#include"CCdTitle.h"
#ifndef CCD_H_
#define CCD_H_
using namespace std;

class CCd
{
private:
	string genre;
	string interpreter;
	string title;
	float playtime;
	string language;
	int year;
//	int cover_r[128][128];
//	int cover_g[128][128];
//	int cover_b[128][128];
	string publisher;
	CCdTitle *singleTitle;
//	CCdTitle titles[99];
public:
	CCd();
	virtual ~CCd();
};

#endif /* CCD_H_ */

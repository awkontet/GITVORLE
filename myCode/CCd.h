/*
 * CCd.h
 *
 *  Created on: Apr 19, 2023
 *      Author: Maria Natasya
 */
#include<iostream>
#include<string>
#include"CCdTitle.h"
#include "CColor.h"
#ifndef CCD_H_
#define CCD_H_
using namespace std;

class CCd
{
private:
	string m_genre;
	string m_interpreter;
	string m_title;
	float m_playtime;
	string m_language;
	int m_year;
//	int cover_r[128][128];
//	int cover_g[128][128];
//	int cover_b[128][128];
	CColor m_cover[128][128];
	string m_publisher;
	CCdTitle *m_singleTitle;
	CCdTitle* m_titles;
public:
	CCd();
	virtual ~CCd();
	int numberofTitles();
	void addTitle(CCdTitle title);
	void print();
};

#endif /* CCD_H_ */

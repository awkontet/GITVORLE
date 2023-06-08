/*
 * CCdTitle.cpp
 *
 *  Created on: Apr 19, 2023
 *      Author: Maria Natasya
 */

#include "CCdTitle.h"


CCdTitle::CCdTitle()
{
	m_playtime=-1;
	// TODO Auto-generated constructor stub

}

CCdTitle::~CCdTitle()
{
	// TODO Auto-generated destructor stub
}

float CCdTitle::getPlaytime()
{
	return m_playtime;
}

bool CCdTitle::isInUse()
{
	return m_playtime=-1;
}

void CCdTitle::markAsLast()
{
	m_playtime = -2;
}

bool CCdTitle::isLast()
{
	return m_playtime =-2;
}

CCdTitle::CCdTitle(string title, short playtime, string genre, string language)
{
	m_title = title;
	if(playtime<0){
		m_playtime=0;
	}else{
		m_playtime= playtime;
	}
	m_genre=genre;
	m_language= language;

}

/*
 * CCd.cpp
 *
 *  Created on: Apr 19, 2023
 *      Author: Maria Natasya
 */

#include "CCd.h"
#include<iostream>
using namespace std;
#include "CCdTitle.h"
#include "CColor.h"

//extern int counter;
CCd::CCd()
{
	m_playtime=0;
	m_year=0;
	m_titles= new CCdTitle[5];
	m_titles[4].markAsLast();

}

CCd::~CCd()
{
	delete[]m_titles;
	// TODO Auto-generated destructor stub
}
c
int CCd::numberofTitles()
{
	int index =0;
	int nbOfTitles=0;
		while(!m_titles[index].isLast()){
			if(m_titles[index].isInUse()){
				nbOfTitles+=1;
			}
			index+=1;
		}
	//for(int counter =0; ;counter++){
		//if(m_titles[counter].m_title==""){
		//	return counter;
		//}

//	},
	return nbOfTitles;
}

void CCd::addTitle(CCdTitle title)
{
	int index=0;
	while(m_titles[index].isValid()&&! m_titles[index].isLast()){
		index =+1;
	}
	if(m_titles[index].isLast()){
		int currentSize= index+1;
		CCdTitle* newArray = new CCdTitle[currentSize+5];
		newArray[currentSize +5 -1].markAsLast();
		for(int i=0; i<index; i++){
			newArray[i]= m_titles[i];
		}
		delete [] m_titles;
		m_titles= newArray;

	}
	m_titles[index]= title;
	// Ich muss wissen, wie viele Slots in Array belegt wird.
	// ---> Bei unbelegten Slots ist die playtime negatif
}

void CCd::print()
{
	cout<<m_title<<endl;
	for(int i=0;i<m_titles.length();i++){
		cout<<"m"<<endl;
	}
	cout<< endl;
}

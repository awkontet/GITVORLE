/*
 * CColor.cpp
 *
 *  Created on: Apr 19, 2023
 *      Author: Maria Natasya
 */

#include "CColor.h"
#include<iostream>
using namespace std;


int CColor::counter = 0;

CColor::CColor() {
	counter += 1;
	m_r = 0;
	m_g = 0;
	m_b = 0;
}

uint8_t CColor::getB() const
{
	return m_b;
}

void CColor::setB(uint8_t mB)
{
	m_b=mB;
}

uint8_t CColor::getG() const
{
	return m_g;
}

void CColor::setG(uint8_t mG)
{
	m_g=mG;
}

uint8_t CColor::getR() const
{
	return m_r;
}

void CColor::setR(uint8_t mR)
{
	m_r= mR;
}

CColor::~CColor()
{
	cout<<"Objekt bei :"<< this<< "wird freigegeben"<< endl;
	// TODO Auto-generated destructor stub
}


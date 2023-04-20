/*
 * CColor.cpp
 *
 *  Created on: Apr 19, 2023
 *      Author: Maria Natasya
 */

#include "CColor.h"

CColor::CColor()
{
	// TODO Auto-generated constructor stub

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
	return m_R;
}

void CColor::setR(uint8_t mR)
{
	m_r= mR;
}

CColor::~CColor()
{
	// TODO Auto-generated destructor stub
}


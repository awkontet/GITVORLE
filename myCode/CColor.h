/*
 * CColor.h
 *
 *  Created on: Apr 19, 2023
 *      Author: Maria Natasya
 */

#ifndef CCOLOR_H_
#define CCOLOR_H_

#include<stdint.h>
class CColor
{
private:
	static int counter;

	uint8_t m_r;
	uint8_t m_g;
	uint8_t m_b;
public:
	CColor();
	virtual ~CColor();
	static int getCounterValue();

	uint8_t getB() const;
	void setB(uint8_t mB);
	uint8_t getG() const;
	void setG(uint8_t mG);
	uint8_t getR() const;
	void setR(uint8_t mR);
};

#endif /* CCOLOR_H_ */

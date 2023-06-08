/*
 * CCdCollection.h
 *
 *  Created on: Jun 7, 2023
 *      Author: Maria Natasya
 */

#ifndef CCDCOLLECTION_H_
#define CCDCOLLECTION_H_
#include"CCd.h"

class CCdCollection
{
private:
	CCd *m_cds[100];
public:
	CCdCollection();
	virtual ~CCdCollection();
};

#endif /* CCDCOLLECTION_H_ */

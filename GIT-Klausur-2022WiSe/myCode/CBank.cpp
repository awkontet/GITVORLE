/*
 * CBank.cpp
 *
 *  Created on: 16.02.2023
 *      Author: mnl
 */

#include "CBank.h"
#include "CCustomer.h"
#include "AccountType.h"

CBank::CBank() {
//	m_customers = new CCustomer*[4];
//	m_customers[0] = new CCustomer(1356, "Pan", "Peter");
//	m_customers[0]->createAccount(1, Current);
//
//	m_customers[1] = new CCustomer(5846, "Liddell", "Alice");
//	m_customers[1]->createAccount(1, Current);
//	m_customers[1]->accountByIndex(0)->post
//			(CTransaction(2022, 1, 1, 2000, "Kontoeröffnung"));
//	m_customers[1]->createAccount(3, Savings);
//	m_customers[1]->accountByIndex(0)->post
//			(CTransaction(2022, 1, 1, -1000, "Umbuchung"));
//	m_customers[1]->accountByIndex(1)->post
//			(CTransaction(2022, 1, 1, 1000, "Umbuchung"));
//	m_customers[1]->accountByIndex(1)->post
//			(CTransaction(2022, 3, 1, -500, "Katzenfutter"));
//	m_customers[1]->createAccount(8, CD);
//
//	m_customers[1]->print();
//
//	m_customers[1]->createAccount(1, Current);
//	m_customers[1]->createAccount(2, Savings);
//	m_customers[1]->createAccount(5, CD);
//
//	m_customers[2] = new CCustomer(8443, "Bear", "Pu");
//	m_customers[2]->createAccount(1, Current);
//
//	m_customers[3] = new CCustomer(8080, "Dumpty", "Humpty");
//	m_customers[3]->createAccount(1, Current);
}

int CBank::customers() const {
	return 4;
}

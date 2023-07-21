#include "CCustomer.h"
#include <iostream>
using namespace std;

CCustomer::CCustomer(unsigned int number, string lastName, string firstName) {
	m_number=number;
	m_lastName=lastName;
	m_firstName= firstName;

}

CCustomer::~CCustomer() {
}

unsigned int CCustomer::getNumber() const {
	return m_number;
}

CAccount* CCustomer::createAccount(unsigned short subAccount,
		AccountType type) {
	// TODO neues Account in nachsten leeren SLot
	int nextFree=0;
	for(;nextFree<5;nextFree++){
		if(m_accounts[nextFree]==0){
			break;
		}
	}
	if(nextFree==5){
		return 0;
	}
	//char buf[20];
	//snprint(buf,20,"%d%09u",subAccount,getNumber());
	//string accountNumber(itoa(getNumber()));
	unsigned long accountNumber= subAccount*1000000000+getNumber();
	for(int i=0; i<5;i++){
		if(m_accounts[i]!= 0 && m_accounts[i]->getNumber()== accountNumber){
			return 0;
		}
	}
	CAccount* account= new CAccount(accountNumber,type);
	return m_accounts[nextFree]=account;

}

bool CCustomer::deleteAccount(unsigned long accountNumber) {
	for(int i=0; i<5;i++){
			if(m_accounts[i]!= 0 && m_accounts[i]->getNumber()== accountNumber){
				if(m_accounts[i]-> getBalance()== 0){
					m_accounts[i]=0;
					return true;
				}
				return false;
			}
	}
	return false;
}

CAccount* CCustomer::accountByIndex(int index) const {
	for(int i=0; i<5;i++){
	if(m_accounts[0]!=0){
		if(index--==0){
			return m_accounts[i];
			}
		}
	}
	return 0;
}

void CCustomer::print() const {
	cout<<"Kunde:"<< m_lastName<<","<<m_firstName<<endl;
	for(int i=0; i<5;i++){
		if(m_accounts[0]!=0){
				cout<< m_accounts[i]<<endl;
		}
	}
}

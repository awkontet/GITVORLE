#include "CAccount.h"
#include <iostream>
#include"CDate.h"

CAccount::CAccount(unsigned long number, AccountType type) {
m_number= number;
m_type=type;
m_balance=0;
m_maxTransactions=0;
m_currentTransactions=0;
m_transactions= new CTransaction[0];
}

CAccount::~CAccount() {
	delete [] m_transactions;
}

unsigned long CAccount::getNumber() const {
	return m_number;
}

float CAccount::getBalance() const {
	return m_balance;
}

void CAccount::post(CTransaction transaction) {
	if(m_currentTransactions >= m_maxTransactions){
		m_maxTransactions+=5;
		CTransaction * newArray= new CTransaction[m_maxTransactions];
		for(int i=0;i< m_currentTransactions; i++){
			newArray[i]=m_transactions[i];
		}
		delete [] m_transactions;
		m_transactions=newArray;

	}
	m_transactions[m_currentTransactions++]= transaction;
	//m_balance+=transaction;
	int year,month,day;
	float amount;
	string comment;
	transaction.transactionData(year,month,day,amount,comment);
	m_balance+=amount;
}

float CAccount::balanceAt(int year, int month, int day) const {
	float balance= m_balance;
	CDate at(year,month,day);
	for(int i= m_currentTransactions-1;i>=0;i--){
		int tYear;
		int tMonth;
		int tDay;
		float amount;
		string comment;
		m_transactions[i].transactionData(tYear, tMonth, tDay, amount, comment);
		CDate tDate(year,month,day);
		if(tYear>year|| tYear==year && tDate.dayOfYear()>= at.dayOfYear()){
			balance-= amount;
		} else{
			break;
		}
	}
	return balance;
}


void CAccount::print() const {
	cout<<"Kontonummer:"<<m_number<<endl;
	int year,month,day;
	float amount;
	string comment;
	for(int i=0;i<m_currentTransactions;i++){
		m_transactions[i].transactionData(year,month,day,amount,comment);
		char date [20];
		snprintf(date,sizeof(date),"%02d,%02d,%04d",day,month,year);
		cout<<date<<": "<< amount<< "("<< comment<<")"<<endl;
	}

}

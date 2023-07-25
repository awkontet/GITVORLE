#include "CAccount.h"
#include "CTransaction.h"
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;
#include "CDate.h"
#include "AccountType.h"


CAccount::CAccount(unsigned long number, AccountType type) {

	m_number=number;
	m_type=type;
	m_balance=0;
	m_maxTransactions=0;
	m_transactions=new CTransaction [m_maxTransactions];
	m_currentTransactions=0;

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
	if (m_currentTransactions>= m_maxTransactions){
		CTransaction* newarray= new CTransaction  [m_maxTransactions+5];
		for(int i=0; i<m_currentTransactions ; i++){
			newarray[i]=m_transactions[i];
		}
		delete [] m_transactions;
		m_transactions=newarray;
		m_maxTransactions+=5;
	}
// m_transactions[m_currentTransactions] = null
	m_transactions [m_currentTransactions]=transaction;
	m_currentTransactions++;
	int day,year,month;
	float amount;
	string comment;
	transaction.transactionData(year,month,day,amount,comment);
	m_balance+=amount;
}


// tasya
// july 2022
// initial balance
// 1 makan, beli buku -$25
// 5 beli supermarket -$50
// 7 --> initial balance - 1 - 5 == current balance -13 -10
// 10 jual buku +$10
// 13 july 2022 beli baju -$30 --> siang
// 13 july 2022 pagi balance?
// current balance -> m_balance == $100
// last trans 13 July 2022
// 15 July 2022 ?
// 12 July 2022 ?
// day of year 1 januari ? 1 - 365
// 30 Dec 2100 ? $100

// ervin beli es krim siang -$20, duit koko sekarang $100
// duit pagi ? $120
float CAccount::balanceAt(int year, int month, int day) const {
	// ga yakin
	int year1,day1,month1;
	float amount1;
	string comment1;
	float currentbalance=m_balance;
	CDate date(year,month,day);
	//m_transactions[m_currentTransactions-1]
	for(int i=0; i<m_currentTransactions; i++){
		m_transactions[i].transactionData(year1, month1, day1, amount1, comment1);
		CDate date1(year1,month1,day1);
		// tahun sama => hari transaction >= hari (yang dicari)
		// if (sesudah)
		// if (year sesudah || (year sama dan dayOfYear sesudah))
		if((year1>year)|| ((year1==year)&&(date1.dayOfYear()>=date.dayOfYear()))){
			currentbalance=-amount1;
		}
	}
	return currentbalance;
}

void CAccount::print() const {
int year1,month1,date1;
	float amount1;
	string comment1;
	cout<<"Kontonummer : "<<m_number<<endl;
	if(m_currentTransactions > 0){
		for(int i=0;i<m_currentTransactions;i++){
			m_transactions[i].transactionData(year1,month1,date1,amount1,comment1);
			cout<<date1<<"."<<month1<<"."<<year1<<": "<< amount1<<" ("<<comment1<<") "<<endl;
		}
	} else{
		cout<<"(Keine Umsätze)"<<endl;
	}
}

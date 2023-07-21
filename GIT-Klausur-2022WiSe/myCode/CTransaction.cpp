#include "CTransaction.h"
#include"CDate.h"

CTransaction::CTransaction(int year, int month, int day, float amount,
		string comment) {
	m_year=year;
	CDate date(year,month,day);
	m_dayOfYear= date.dayOfYear();
	m_comment=comment;
	m_amount=amount;
}

CTransaction::CTransaction() {
	m_year=0;
	m_dayOfYear=0;
	m_amount=0;


}

void CTransaction::transactionData(int &year, int &month, int &day,
		float &amount, string &comment) const {
	CDate date(m_year,m_dayOfYear);
	month=date.month();
	day=date.day();
	year = m_year;
	amount= m_amount;
	comment=m_comment;
}

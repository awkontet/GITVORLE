#include "CTransaction.h"
#include <ctime>
#include <iomanip>
using namespace std;
#include "CDate.h"

CTransaction::CTransaction(int year, int month, int day, float amount,
		string comment) {
	m_year=year;
	CDate date(year,month,day);
	m_amount= amount;
	m_comment=comment;
	m_dayOfYear=date.dayOfYear();

}

CTransaction::CTransaction() {
	m_year=0;
	m_amount= 0;
	m_comment="";
	m_dayOfYear=0;

}

void CTransaction::transactionData(int &year, int &month, int &day,
		float &amount, string &comment) const {
	CDate datadate (m_year,m_dayOfYear);
	year=datadate.year();
	// dayOfYear 300 -> day + month
	month=datadate.month();
	day= datadate.day();
	amount=m_amount;
	comment= m_comment;
}

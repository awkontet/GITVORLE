#include "CCustomer.h"
#include <iostream>
using namespace std;

CCustomer::CCustomer(unsigned int number, string lastName, string firstName) {
	m_number=number;
	m_lastName= lastName;
	m_firstName=firstName;
	for(int i=0;i<5;i++){
		m_accounts[i]=0;
	}
}

CCustomer::~CCustomer() {
	for(int i=0;i<5;i++){
		delete  m_accounts[i];
		}
}

unsigned int CCustomer::getNumber() const {
	return m_number;
}

CAccount* CCustomer::createAccount(unsigned short subAccount,
		AccountType type) { //belajarin lagi

	// cari tahu apakah bisa nambah account
	// syarat nambah account:
	// customer max. 5 account (indexnya max 4) pake looping
	// cari account yang masi kosong
	// yang kosong diisi
	// kalo ada isinya
	// ga boleh jadi account baru krn punya orang -> cari lagi
	// kalo ketemu ada isi lagi
	// ga boleh jd account baru sampe 5x
	unsigned long nomor= (subAccount*1000000000)+m_number;
	CAccount * newaccount=new CAccount (nomor, type);
	for(int i=0; i<5; i++){
		//cout<<i<<endl;
		if(m_accounts[i]==0){
			m_accounts[i]=newaccount;
			return newaccount;
		}
		if(i>=4){
			 cout<<"Full"<<endl;
			 return 0;
		}
		if(m_accounts[i]->getNumber()== nomor){
			cout<<"this account exist"<<endl;
			return 0;
		}

	}

	// kalo accountnya kosong & ga exist nomornya = boleh jadi account baru
	// selesai

}

bool CCustomer::deleteAccount(unsigned long accountNumber) {
	for(int i=0; i<5; i++){
		// mau dleete account yang kt masukin angkanya
		// m_accounts[i]->getNumber() --> number nya account index-i
		// m_accounts[i] kosong
		// (), x/ dulu an, +-
		// (), && ||
		// 0 -> getNumber() crash!
		// 1 && 2 && 3 kalo 1 false, 2 sama 3 ga jalan, hasi
		// 1 || 2 || 3 kalo 1 false, 2 jalan -> false, 3 jalan -> false
		// kalo 1 false
		if((m_accounts[i]!=0)&&(m_accounts[i]->getNumber()==accountNumber)&&(m_accounts[i]->getBalance()==0)){
			m_accounts[i]=0;
			cout<<"delete success"<<endl;
			return true;
		}
	}
	cout<<"failed"<<endl;
	return false;
}

CAccount* CCustomer::accountByIndex(int index) const {
	if(0<=index&& index<5){
		return m_accounts[index];
	}
	return 0;
}

void CCustomer::print() const {
	cout<<"Kunde:"<<m_lastName<<", "<<m_firstName<<endl;
	for(int i=0; i<5 ; i++){
		if(m_accounts!=0){
			m_accounts[i]->print();

		}
	}
}

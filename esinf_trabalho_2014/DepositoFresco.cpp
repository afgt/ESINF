/* 
 * File:   DepositoFresco.cpp
 * Author: 1100912 - Nuno Lemos
 *         1101153 - André Teixeira
 * 
 * Created on 17 de Outubro de 2014, 21:01
 */

#include "DepositoFresco.h"

DepositoFresco::DepositoFresco():Deposito(){
	carga=0;
}

DepositoFresco::DepositoFresco(int chave, int npaletes, int c, Palete &p):Deposito(chave,npaletes){
	carga=c;
	pal = &p;
	
}

DepositoFresco::DepositoFresco(const DepositoFresco &d):Deposito(d){
	carga=d.getCarga();
	pal=d.pal;
	
}

DepositoFresco::~DepositoFresco(){
}

int DepositoFresco ::getCarga()const{
	return carga;
}

void DepositoFresco::setCarga(int c){
	carga=c;
}

Palete& DepositoFresco::getPalete() {
	return *pal;
}

void DepositoFresco::listar()const{
	cout << "Chave do Depósito: "<<getChave()<<"\n Número Paletes: "<<getPaletes()<<"\n Carga: "<<getCarga()<<"Kgs."<<endl;
}

Deposito* DepositoFresco:: clone() const
{
 return new DepositoFresco(*this);
}

 void DepositoFresco ::escrever (ostream & o)const
 {
		Deposito::escrever(o);
		o << "Carga: "<< carga << " Kgs."<<endl;
		o << "Palete: " << pal->getChave() << endl;
 }

 DepositoFresco & DepositoFresco ::operator =(const DepositoFresco & d)
 {
	 if (this != & d)
	 {
		 carga = d.carga; 
	     pal = d.pal;
		 Deposito :: operator = (d);
	 }
	 return *this;
 }

 bool DepositoFresco :: operator > (const DepositoFresco & d) const
 {
	 if (carga>d.carga && (pal > d.pal))
		 return true;
	 return false;
 }

 bool DepositoFresco :: operator == (const DepositoFresco & d) const
 {
	 if (carga==d.carga && (pal == d.pal))
		 return true;
	 return false;
 
 }

 ostream & operator << (ostream& o, const DepositoFresco &d){
	d.escrever(o);
	return o;
 }


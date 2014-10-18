/* 
 * File:   DepositoNormal.cpp
 * Author: 1100912 - Nuno Lemos
 *         1101153 - André Teixeira
 * 
 * Created on 17 de Outubro de 2014, 21:01
 */

#include "DepositoNormal.h"


DepositoNormal::DepositoNormal():Deposito(){
	
}

DepositoNormal::DepositoNormal(int chave, int npaletes, Palete &p):Deposito(chave,npaletes){
	pal = &p;
	
}

DepositoNormal::DepositoNormal(const DepositoNormal &d):Deposito(d){
	pal=d.pal;
	
}

DepositoNormal::~DepositoNormal(){
}

Palete& DepositoNormal::getPalete() {
	return *pal;
}

void DepositoNormal::listar()const{
	cout << "Chave do Depósito: "<<getChave()<<"\n Número Paletes: "<<getPaletes()<<endl;
}

Deposito* DepositoNormal:: clone() const
{
 return new DepositoNormal(*this);
}

 void DepositoNormal ::escrever (ostream & o)const
 {
		Deposito::escrever(o);
		o << "Palete: " << pal->getChave() << endl;
 }

 ostream & operator << (ostream& o, const DepositoNormal &d){
	d.escrever(o);
	return o;
 }



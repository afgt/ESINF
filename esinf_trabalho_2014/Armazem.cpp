/* 
 * File:   Armazem.cpp
 * Author: Nuno Lemos
 * 
 * Created on 18 de Outubro de 2014, 10:45
 */

#include "Armazem.h"


Armazem::Armazem(){
	
}

Armazem::Armazem(const Armazem &a){
		
}

Armazem::~Armazem(){
	
}

Deposito * Armazem::encDeposito(int depositoID) {

}

void Armazem::output(ostream &out)const{
	out << "Armazém: "<< endl;
	out << "Lista de Depósitos: " << endl;
	out << listarDepositos;
	out << "Lista de Paletes: " << endl;
	out << listarPaletes;
}

ostream & operator << (ostream& out, const Armazem &a){
	a.output(out);
	return out;
}

void Armazem::listarPaletes(){
		
}

void Armazem::listarDepositos()
{
		
}


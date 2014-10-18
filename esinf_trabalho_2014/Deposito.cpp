/* 
 * File:   Deposito.cpp
 * Author: 1100912 - Nuno Lemos
 *         1101153 - André Teixeira
 * 
 * Created on 17 de Outubro de 2014, 21:00
 */

#include "Deposito.h"


Deposito::Deposito(){
	chave=0;
	npaletes=0;
        capacidade_max=0;
        area=0;
}

Deposito::Deposito(int c, int p, int m, int a){
	chave=c;
	npaletes=p;
        capacidade_max=m;
        area=a;
}

Deposito::Deposito(const Deposito &d)
{
	chave=d.getChave();
	npaletes=d.getPaletes();
        capacidade_max=d.getCapacidade();
        area=d.getArea();
}

Deposito::~Deposito(){
}

void Deposito::setChave(int c){
	chave=c;
}

int Deposito::getChave()const{
	return chave;
}

int Deposito ::getPaletes()const{
	return npaletes;
}

void Deposito::setPaletes(int p){
	npaletes=p;
}

int Deposito ::getCapacidade()const{
	return capacidade_max;
}

void Deposito::setCapacidade(int m){
	capacidade_max=m;
}

int Deposito ::getArea()const{
	return area;
}

void Deposito::setArea(int a){
	area=a;
}

void Deposito::listar()const 
{
	cout << "Chave: " << getChave() << endl;
}

Deposito& Deposito:: operator =(const Deposito & d)
	{
		if (this != &d)
		{
			chave = d.chave;

		}
		return *this;
 }

 bool Deposito:: operator == (const Deposito & d) const
 {
	 if (chave == d.chave)
		 return true;
	 return false;
 
 }

 bool Deposito:: operator > (const Deposito & d) const
 {
	 if (chave>d.chave)
		 return true;
	 return false;
 }
 
 void Deposito::escrever(ostream &o) const
 {
	 o<<"Chave do Depósito: " << chave << endl;
	 o<<"Número Paletes: " << npaletes <<"Unid."<< endl;
         o<<"Capacidade Máxima: " << capacidade_max << endl;
         o<<"Área Total: " << area << endl;
	 
 }

ostream  & operator << (ostream & out, const Deposito & d)
 {
	 d.escrever(out);
	 return out;
 }


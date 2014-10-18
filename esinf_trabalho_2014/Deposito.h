/* 
 * File:   Deposito.h
 * Author: 1100912 - Nuno Lemos
 *         1101153 - André Teixeira
 *
 * Created on 17 de Outubro de 2014, 21:00
 */

#ifndef DEPOSITO_H
#define	DEPOSITO_H

#include <string>
#include <stdio.h>
#include <iostream>
#include "Palete.h"

using namespace std;

class Deposito
{
	private:
		int chave;
		int npaletes;
                int capacidade_max;
                int area;


	public:
		Deposito();
		Deposito(int chave, int npaletes, int capacidade_max, int area);
		Deposito(const Deposito &d);
		virtual ~Deposito();
		void setChave(int c);
		int getChave() const;
		void setPaletes(int p);
		int getPaletes() const;
                void setCapacidade(int m);
		int getCapacidade() const;
                void setArea(int a);
		int getArea() const;
		virtual void listar() const;
		virtual Deposito & operator = (const Deposito & d);
		virtual bool operator == (const Deposito & d)const;
		virtual bool operator > (const Deposito & d)const;
		virtual void escrever(ostream & o)const;
		virtual Deposito* clone()const=0;
};

#endif	/* DEPOSITO_H */


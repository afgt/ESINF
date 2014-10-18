/* 
 * File:   DepositoNormal.h
 * Author: 1100912 - Nuno Lemos
 *         1101153 - André Teixeira
 *
 * Created on 17 de Outubro de 2014, 21:01
 */

#ifndef DEPOSITONORMAL_H
#define	DEPOSITONORMAL_H

#include <string>
#include <iostream>
#include "Deposito.h"
#include "Palete.h"

using namespace std;

class DepositoNormal: public Deposito{
	
private:	
	Palete* pal;

public:
	DepositoNormal();
	DepositoNormal(int chave, int npaletes, Palete &p);
	DepositoNormal(const DepositoNormal &d);
	~DepositoNormal();
	void listar()const;
	Palete& getPalete();
	virtual Deposito* clone()const;
	virtual void escrever (ostream & o) const;
};

#endif	/* DEPOSITONORMAL_H */


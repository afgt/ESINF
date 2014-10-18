/* 
 * File:   DepositoFresco.h
 * Author: 1100912 - Nuno Lemos
 *         1101153 - André Teixeira
 *
 * Created on 17 de Outubro de 2014, 21:01
 */

#ifndef DEPOSITOFRESCO_H
#define	DEPOSITOFRESCO_H

#include <string>
#include <iostream>
#include "Deposito.h"
#include "Palete.h"

using namespace std;

class DepositoFresco: public Deposito{
	
private:	
	int carga;
	Palete* pal;

public:
	DepositoFresco();
	DepositoFresco(int chave, int npaletes, int carga, Palete &p);
	DepositoFresco(const DepositoFresco &d);
	~DepositoFresco();
	int getCarga()const;
	void setCarga(int c);
	void listar()const;
	Palete& getPalete();
	virtual Deposito* clone()const;
	virtual DepositoFresco & operator =(const DepositoFresco & d);
	virtual bool operator == (const DepositoFresco & d) const;
	virtual bool operator > (const DepositoFresco & d) const;
	virtual void escrever (ostream & o) const;
};

#endif	/* DEPOSITOFRESCO_H */


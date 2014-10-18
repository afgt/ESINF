/* 
 * File:   Armazem.h
 * Author: Nuno Lemos
 *
 * Created on 18 de Outubro de 2014, 10:45
 */

#ifndef ARMAZEM_H
#define	ARMAZEM_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <queue>
#include <stack>
#include "Deposito.h"
#include "Palete.h"
#include "DepositoFresco.h"
#include "DepositoNormal.h"

using namespace std;


class Armazem{
	private:
		


	public:
		Armazem();
		Armazem(const Armazem &a);
		~Armazem();
		void novaPalete();
		void adicionarPalete();
		void adicionarDeposito(Deposito &d);
		void output(ostream &out)const;
		void listarArmazens();
		void listarDepositos();
		void listarPaletes();
		void encontraDeposito(int key);
		Deposito * encDeposito(int depositoID);


};

#endif	/* ARMAZEM_H */

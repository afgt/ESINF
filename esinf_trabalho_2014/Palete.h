/* 
 * File:   Palete.h
 * Author: Nuno Lemos
 *
 * Created on 18 de Outubro de 2014, 10:59
 */

#ifndef PALETE_H
#define	PALETE_H

#include <string>
#include <iostream>

using namespace std;

class Palete{
	
private:	
	int chave;
	int capacidade;
	int produto;
	int posicao; //key Depósito

public:
	Palete();
	Palete(int chave, int capacidade, int produto, int posicao);
	Palete(const Palete &p);
	~Palete();
	int getChave()const;
	void setChave(int chave);
	int getProduto()const;
	void setProduto(int produto);
	int getCapacidade()const;
	void setCapacidade(int capacidade);
	int getPosicao()const;
	void setPosicao(int posicao);
	void listar()const;
	Palete* clone()const;
	Palete & operator =(const Palete & p);
	bool operator == (const Palete & p) const;
	bool operator > (const Palete & p) const;
	void escrever (ostream & o) const;
};

#endif	/* PALETE_H */

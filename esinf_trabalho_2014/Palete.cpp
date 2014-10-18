/* 
 * File:   Palete.cpp
 * Author: Nuno Lemos
 * 
 * Created on 18 de Outubro de 2014, 10:59
 */

#include "Palete.h"

Palete::Palete(){
	chave=0;
	produto=0;
	capacidade=0;
}

Palete::Palete(int pk, int c, int m, int p){
	chave=pk;
	capacidade=c;
	produto=m;
	posicao=p;
}

Palete::Palete(const Palete& p){
	chave=p.getChave();
	capacidade=p.getCapacidade();
	produto=p.getProduto();
	posicao=p.getPosicao();
}

Palete::~Palete(){
}

int Palete::getChave()const{
	return chave;
}

void Palete::setChave(int pk){
	chave=pk;
}

void Palete::setPosicao(int p){
	posicao=p;
}

int Palete::getPosicao()const{
	return posicao;
}

void Palete::setCapacidade(int c){
	capacidade=c;
}

int Palete ::getCapacidade()const{
	return capacidade;
}

int Palete ::getProduto()const{
	return produto;
}

void Palete::setProduto(int m){
	produto=m;
}

void Palete::listar()const{
	cout << "ID do Robot: "<<getChave()<<"\n Capacidade maxima: "<<getCapacidade()<<"Kgs \n Quantidade materia-prima disponivel: "<<getProduto()<<endl;
	cout << "\n" << endl;
}

void Palete ::escrever (ostream & o)const
 {
		o << "ID:"<< chave <<endl;
		o << "Capacidade maxima: " << capacidade <<"Kgs."<<endl;
		o << "Produtos: " << produto << endl;
		o << "Posicao: " << posicao<<endl;
}

 Palete & Palete ::operator =(const Palete & p)
 {
	 if (this != & p)
	 {
		 chave = p.chave;
		 produto = p.produto;
		 capacidade = p.capacidade;
	 }
	 return *this;
 }

 bool Palete :: operator > (const Palete & p) const
 {
	 if (chave>p.chave && produto>p.produto && capacidade>p.capacidade)
		 return true;
	 return false;
 }

 bool Palete :: operator == (const Palete & p) const
 {
	 if ( chave==p.chave && produto==p.produto && capacidade==p.capacidade)
		 return true;
	 return false;
  }

 ostream & operator << (ostream &o, const Palete &p){
	 p.escrever(o);
	 return o;
 }


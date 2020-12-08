#pragma once
#include"Noeud.h"
class Stack
{
public:
	//constructeur
	Stack();//constructeur sans paramétres
	Stack(Noeud*);//constructeur avec parametre
	void push(int*);
	void pop();
	void m_print()const;
	void m_print_sommet()const;
	bool empty()const;
	bool pleine()const;
//atribut
private:
	Noeud* head;
	static int  nbr_max;
	int nbr_courant=0;
};


#include "pch.h"
#include "Stack.h"
#include<iostream>
#include<assert.h>
using namespace std;
int Stack:: nbr_max=10;
Stack::Stack()
{
	this->head = NULL;
}

Stack::Stack(Noeud* top)
{
	this->head = new Noeud;
	this->head = top;
	this->nbr_courant++;
}

void Stack::push(int *D)
{
	assert(!this->pleine());
	Noeud* nv;
	nv = new Noeud;
	if(nv!=NULL)
	nv->data = D;
	nv->Back = this->head;
	this->head = nv;
	this->nbr_courant++;
}

void Stack::pop()
{
	assert(!this->empty());
	Noeud* temp = this->head->Back;
	delete this->head;
	this->head = temp;
	this->nbr_courant--;
}

void Stack::m_print() const
{
	Noeud* temp = this->head;
	while (temp != NULL)
	{
		cout << *(temp->data) << endl;
		temp = temp->Back;
	}
}

void Stack::m_print_sommet() const
{
	if (this->head != NULL)
	{
		cout << *(this->head->data)<< endl;
	}
}

bool Stack::empty() const
{
	if (this->head == NULL)
		return true;
	return false;
}

bool Stack::pleine() const
{
	if (this->nbr_courant == Stack::nbr_max)
		return true;
	return false;
}

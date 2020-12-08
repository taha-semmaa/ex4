#pragma once
class Noeud
{
private:
	Noeud* Back;
	int* data;
public:
	friend class Stack;
};


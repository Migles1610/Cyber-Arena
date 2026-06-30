#pragma once
#include <iostream>
#include <string>
using namespace std;

void exibir(string nome, int vida, int ataque, int defesa){
	cout<<nome;
	cout<<"Vida: "<<vida;
	cout<<"Ataque: "<<ataque;
	cout<<"Defesa: "<<defesa;
}

int dano(int ataque, int defesa) {
    int d = ataque - defesa;
}

bool estaVivo(int vida){
	return(vida>0) ? vida:0;
}

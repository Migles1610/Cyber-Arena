#include <iostream>
#include <string>
#include "combate.h"
using namespace std;


int main(){
	setlocale(LC_ALL, "Portuguese");	
	
	exibir("Herói", 245 , 75 , 50 );
	cout<<"\n\n";	
	exibir("Demônio das Sombras", 750, 100, 40);

	cout<<"O  ataca primeiro e em seguida o dêmonio";
}



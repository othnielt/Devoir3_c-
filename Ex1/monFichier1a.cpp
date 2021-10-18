#include <iostream>
using namespace std;

enum Color {club, diamiond, spades, heart}; //définition d'un type énumération nommé color qui comporte
											//quatres valeurs possibles désigées par les identificateurs club, diamond, spades, heart
											//ces valeurs constituent les constantes de type color

enum Face {seven, eight, nine, ten, jack, queen, king, ace};

struct Card{
	Color color;
	Face face;
};

int main(){
	Card game[32];

	int a= 0;

	for(int i=0; i<8;i++){

		for (int j=0; j<4; j++){

			game[a].face = (Face)i;
			game[a].color = (Color)j;
			a++;

		}
	}

}


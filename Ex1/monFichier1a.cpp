#include <iostream>
using namespace std;

enum Color {club, diamiond, spades, heart}; 

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


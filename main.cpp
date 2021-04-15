#include <iostream>
#include <time.h>
#include "dados.h"
using namespace std;



int main() {

	srand(time(NULL));
	
	for (int i = 1; i <= 6; i++) {
		dibujarDado(10*i+ (rand() % 2), 2+(rand()%8), i);
	}
	
	
	

	return 0;
}
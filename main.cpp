#include <iostream>
#include "sculptor.h"

using namespace std;

int main (void) {

	Sculptor Escultura(200, 200, 200);

    //1. constru��o da cabe�a
	Escultura.setColor(0, 0, 0, 1);
	Escultura.putSphere(49, 45, 41, 35);

    //2. constru��o dos olhos
	Escultura.setColor(255, 255, 255, 1);
	Escultura.putEllipsoid(59, 37, 76, 5, 5, 1); //olho direito
	Escultura.putEllipsoid(39, 37, 76, 5, 5, 1); //olho esquerdo

    //3. constru��o do nariz
	Escultura.setColor(255, 255, 255, 1);
	Escultura.setColor(0.8600, 0.7020, 0.6160, 1);
	Escultura.putSphere(49, 32, 74, 5);


	//4. constru��o da boca
	Escultura.setColor(255, 255, 255, 1);
	Escultura.putEllipsoid(49, 18, 64, 7, 3, 1);

	Escultura.writeOFF((char *) "EsculturaDigital.off" );

	return 0;
}

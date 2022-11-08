#ifndef SCULPTOR_H
#define SCULPTOR_H
#include "voxel.h"

class Sculptor {

protected:
	Voxel *** v; //ponteiro para ponteiro para ponteiro do tipo struct Voxel
	int nx; //dimens�o X da matriz
	int ny; //dimens�o Y da matriz
	int nz; //dimens�o Z da matriz
	float r; //define tom red de cada voxel
	float g; //define tom green de cada voxel
	float b; //define tom blue de cada voxel
	float a; //define transpar�ncia de cada voxel

public:
	Sculptor(int _nx, int _ny, int _nz); //construtor respons�vel por inicializar o objeto - reserva um espa�o de mem�ria
	~Sculptor(); //destrutor respons�vel por finalizar o objeto
	void setColor(float r, float g, float b, float alpha); //seleciona cor do voxel
	void putVoxel(int x, int y, int z); //ativa um voxel em (x,y,z)
	void cutVoxel(int x, int y, int z); //retira um voxel (x,y,z)
	void putBox(int x0, int x1, int y0, int y1, int z0, int z1);  // Ativa um bloco de voxels no intervalo
	void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);  // Retira um bloco de voxels no intervalo
	void putSphere(int xcenter, int ycenter, int zcenter, int r); // Cria/ativa uma esfera
	void cutSphere(int xcenter, int ycenter, int zcenter, int r); // Retiva uma esfera
	void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); //ativa um elipsoide
	void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); //retira um elipsoide
	void writeOFF(char *filename); //grava a escultura em um arquivo
};

#endif // SCULPTOR_H_INCLUDED

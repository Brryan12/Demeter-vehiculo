#pragma once
#include "Vehiculo.h"

class Contenedora {
private:
	Vehiculo** vec;
	int cant;
	int tam;
public:
	Contenedora(int k);
	~Contenedora();
	bool ingresarVehiculo(Vehiculo& veh);

};
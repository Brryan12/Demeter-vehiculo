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
	bool yaExistePlaca(std::string placa);
	//bool eliminarVehiculo(std::string placa);
	std::string toString();
};
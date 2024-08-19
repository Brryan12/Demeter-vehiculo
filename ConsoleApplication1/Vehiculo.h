#pragma once
#include <sstream>
#include <iostream>
#include "Puerta.h"
class Vehiculo
{
private:
	std::string placa;
	Puerta* puerta;
	bool estadoVehiculo;
public:
	Vehiculo(std::string placa, Puerta* puerta, bool estadoVehiculo);
	virtual ~Vehiculo();
	void cerrarPuerta();
	void abrirPuerta();
	std::string getPlaca();
	void cerrarVentana();
	void abrirVentana();
	bool cambiarPolarizado(int np);
	std::string toString();
};


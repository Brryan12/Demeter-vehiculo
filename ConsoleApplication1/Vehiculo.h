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
	void cerrarVentana();
	void abrirVentana();
	std::string toString();
};


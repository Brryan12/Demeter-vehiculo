#pragma once
#include <iostream>
#include <sstream>
#include "Ventana.h"

class Puerta
{
private:
	std::string codigo;
	bool estadoPuerta;
	Ventana *ventana;
public:
	Puerta(std::string codigo,bool estadoPuerta,Ventana *ventana);
	virtual ~Puerta();
	std::string getCodigo();
	void setCodigo();
	bool getEstadoPuerta();
	void setEstadoPuerta();
	void abrirPuerta();
	void cerrarPuerta();
	void abrirVentana();
	void cerrarVentana();
	std::string toString();
};


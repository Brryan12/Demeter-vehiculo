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
	void setCodigo(int codigo);
	bool getEstadoPuerta();
	void setEstadoPuerta(bool estadoPuerta);
	void abrirPuerta();
	void cerrarPuerta();
	void abrirVentana();
	void cerrarVentana();
	bool cambiarNivelPolarizado(int np);
	std::string toString();
};


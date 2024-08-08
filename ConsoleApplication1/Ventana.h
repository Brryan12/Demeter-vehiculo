#pragma once
#include <sstream>
#include <iostream>
class Ventana
{
private:
	bool estadoVen;
	int nivPolarizado;
public:
	Ventana(bool estadoVen, int nivPolarizado);

	virtual ~Ventana();
	bool getEstadoVen();
	void setEstadoVen();
	int getNivPolarizado();
	void setNivPolarizado();
	void cerrarVentana();
	void abrirVentana();
	std::string toString();
};


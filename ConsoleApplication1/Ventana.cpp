#include "Ventana.h"

Ventana::Ventana(bool estadoVen, int nivPolarizado):estadoVen(estadoVen), nivPolarizado(nivPolarizado)
{
}

Ventana::~Ventana()
{
}

bool Ventana::getEstadoVen()
{
	return false;
}

void Ventana::setEstadoVen()
{
	this->estadoVen = estadoVen;
}

int Ventana::getNivPolarizado()
{
	return nivPolarizado;
}

void Ventana::setNivPolarizado()
{
	this->nivPolarizado = nivPolarizado;
}

void Ventana::cerrarVentana()
{
	if (estadoVen == false)
		estadoVen = true;
}

void Ventana::abrirVentana()
{
	if (estadoVen == true)
		estadoVen = false;
}

std::string Ventana::toString() {
	std::stringstream s;
	s << "El nivel de polarizacion es de: " << getNivPolarizado() << " grados." << std::endl << "Estado de la ventana: ";
	if (estadoVen == false)
		s << "Cerrada" << std::endl;
	else
		s << "Abierta" << std::endl;
	return s.str();
}
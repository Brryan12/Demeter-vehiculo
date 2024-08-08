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

void Ventana::setEstadoVen(bool estadoVen)
{
	this->estadoVen = estadoVen;
}

int Ventana::getNivPolarizado()
{
	return nivPolarizado;
}

bool Ventana::setNivPolarizado(int nivPolarizado)
{
	if (nivPolarizado >= 0 && nivPolarizado <= 100) {
		this->nivPolarizado = nivPolarizado;
		return true;
	}
	else
		return false;
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
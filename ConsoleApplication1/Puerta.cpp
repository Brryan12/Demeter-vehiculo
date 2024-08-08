#include "Puerta.h"

Puerta::Puerta(std::string codigo, bool estadoPuerta, Ventana *ventana):codigo(codigo),estadoPuerta(estadoPuerta),ventana(ventana)
{
}

Puerta::~Puerta()
{
	if (ventana != NULL)
		delete ventana;
}

std::string Puerta::getCodigo()
{
	return codigo;
}

void Puerta::setCodigo(int codigo)
{
	this->codigo = codigo;
}

bool Puerta::getEstadoPuerta()
{
	return false;
}

void Puerta::setEstadoPuerta(bool estadoPuerta)
{
	this->estadoPuerta = estadoPuerta;
}

void Puerta::abrirPuerta()
{
	if (estadoPuerta == true)
		estadoPuerta = false;
}

void Puerta::cerrarPuerta()
{
	if (estadoPuerta == false)
		estadoPuerta = true;
}

void Puerta::abrirVentana()
{
	if(ventana!=NULL)
	ventana->abrirVentana();
}

void Puerta::cerrarVentana()
{
	if (ventana != NULL)
		ventana->cerrarVentana();
}

void Puerta::cambiarNivelPolarizado(int np)
{
	ventana->setNivPolarizado(np);
}

std::string Puerta::toString()
{
	std::stringstream s;
	s << "El codigo de la puerta es: "<<codigo<<std::endl<<"El estado de la puerta es: ";
	if (estadoPuerta == true)
		s << "Esta cerrada" << std::endl;
	else
		s << "Esta abierta" << std::endl;
	if (ventana != NULL)
		s << ventana->toString() << std::endl;
	else
		s << "Esta puerta no tiene ventana" << std::endl;
	return s.str();
}

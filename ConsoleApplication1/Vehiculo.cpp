#include "Vehiculo.h"

Vehiculo::Vehiculo(std::string placa, Puerta* puerta, bool estadoVehiculo) : placa(placa), puerta(puerta), estadoVehiculo(estadoVehiculo)
{
}

Vehiculo::~Vehiculo()
{
	if (puerta != NULL)
		delete puerta;
}

void Vehiculo::cerrarPuerta()
{
	if(puerta!=NULL)
	puerta->cerrarPuerta();
}

void Vehiculo::abrirPuerta()
{
	if (puerta != NULL)
	puerta->abrirPuerta();
}

void Vehiculo::cerrarVentana()
{
	if (puerta != NULL)
	puerta->cerrarVentana();
}

void Vehiculo::abrirVentana()
{
	if (puerta != NULL)
	puerta->abrirVentana();
}

bool Vehiculo::cambiarPolarizado(int np)
{
	if(puerta!=NULL)
	return puerta->cambiarNivelPolarizado(np);
}

std::string Vehiculo::toString()
{
	std::stringstream s;
	s << "La placa del vehiculo es: " << placa<<std::endl;
	s << "El vehiculo esta prendido: ";
	if (estadoVehiculo == true)
		s << "Prendido " << std::endl;
	else
		s << "Apagado " << std::endl;
	if (puerta != NULL)
		s << puerta->toString() << std::endl;
	else
		s << "Esta vehiculo no tiene puertas" << std::endl;
	return s.str();
}

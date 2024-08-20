#include "Contenedora.h"

Contenedora::Contenedora(int k)
{
	tam = k;
	cant = 0;
	vec = new Vehiculo * [tam];
	for (int i = 0; i < tam; i++)
	{
		vec[i] = NULL;
	}
}

Contenedora::~Contenedora()
{
	for (int i = 0; i < cant; i++)
	{
		if(i!=NULL)
		delete vec[i];
	}
	delete[] vec;
}

bool Contenedora::ingresarVehiculo(Vehiculo& veh)
{
	if (yaExistePlaca(veh.getPlaca())==false){
		if (cant < tam){
			vec[cant++] = &veh;
			return true;
		}
		else
			return false;
	}
	else
		return false;
}

bool Contenedora::yaExistePlaca(std::string placa)
{
	for (int i = 0; i < cant; i++){
		if (vec[i] != NULL)
			if (vec[i]->getPlaca() == placa)
				return true;
	}
	return false;
}
std::string Contenedora::toString()
{
	std::stringstream s;
	s << "----REPORTE DE VEHICULOS----" << std::endl;
	for (int i = 0; i < cant; i++) {
		if (vec[i] != NULL)
			s << vec[i]->toString() << std::endl;
	}
	return s.str();
}
/*bool Contenedora::eliminarVehiculo(std::string placa) {
	for (int i = 0; i < cant; i++) {
		if (vec[i] != NULL)
			if (vec[i]->getPlaca() == placa) {
				delete vec[i];
				vec[i] = NULL;
				return true;
			}
	}
	return false;
}
*/
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
	if (cant < tam)
	{
		vec[cant++] = (Vehiculo*) & veh;
		return true;
	}
	else
		return false;
}

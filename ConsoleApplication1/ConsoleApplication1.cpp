#include <iostream>
#include "Vehiculo.h"
int main()
{
    std::cout << "Vehiculo dinamico" << std::endl;
    Ventana* ventana1 = new Ventana(true,50);
    Puerta* puerta1 = new Puerta("001", true, ventana1);
    Vehiculo* vehiculo1 = new Vehiculo("1254", puerta1, false);

    std::cout << vehiculo1->toString()<<std::endl;

    vehiculo1->cambiarPolarizado(75);
    std::cout << vehiculo1->toString();
    delete vehiculo1;


    return 0;
}


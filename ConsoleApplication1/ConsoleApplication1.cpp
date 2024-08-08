#include <iostream>
#include "Vehiculo.h"
int main()
{
    std::cout << "Vehiculo dinamico" << std::endl;
    Ventana* ventana1 = new Ventana(true,50);
    Puerta* puerta1 = new Puerta("001", true, ventana1);
    Vehiculo* vehiculo1 = new Vehiculo("1254", puerta1, false);

    std::cout << vehiculo1->toString()<<std::endl;
    vehiculo1->cambiarPolarizado(175);
   
    std::cout << vehiculo1->toString();
    if (vehiculo1->cambiarPolarizado(175) == false)
        std::cerr << "No se logro el cambio del polarizado" << std::endl;
    delete vehiculo1;


    return 0;
}


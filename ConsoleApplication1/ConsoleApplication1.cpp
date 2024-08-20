#include <iostream>
#include "Contenedora.h"
#include "Vehiculo.h"
#include "Puerta.h"
#include "Ventana.h"
#include <Windows.h>

int main()
{
    /*std::cout << "Vehiculo dinamico" << std::endl;
    Ventana* ventana1 = new Ventana(true,50);
    Puerta* puerta1 = new Puerta("001", true, ventana1);
    Vehiculo* vehiculo1 = new Vehiculo("1254", puerta1, false);

    std::cout << vehiculo1->toString()<<std::endl;
    vehiculo1->cambiarPolarizado(175);
   
    std::cout << vehiculo1->toString();
    if (vehiculo1->cambiarPolarizado(175) == false)
        std::cerr << "No se logro el cambio del polarizado" << std::endl;
    delete vehiculo1;
*/
    // Modo 1: la app corre correctamente pero main es grande
  //Zona de identificadores
    int op,k,nivelPolarizado;
    std::string placa,codigoPuerta;
	int estadoBoolVehiculo, estadoBoolPuerta, estadoBoolVentana;
	bool estBool;
	Ventana* venPtr = NULL;
	Puerta* puePtr = NULL;
	Vehiculo* vehPtr = NULL;
    //...
	//Zona de analisis
    std::cout << "Inggrese el tama�o del vector de vehiculos: "; std::cin >> k;
	Contenedora* contPtr = new Contenedora(k);
    Sleep(6000);
	system("cls");
    do {
		system("cls");
		std::cout << std::endl;
		std::cout << "----MENU----" << std::endl;
		std::cout << "1. Ingresar vehiculo" << std::endl;
		std::cout << "2. Mostrar vehiculos" << std::endl;
		std::cout << "3. Salir" << std::endl;
		std::cout << "Ingrese una opcion: "; std::cin >> op;
		std::cout << "-----------------" << std::endl;
		switch (op) {
		case 1:
			std::cout<<"Creacion de la ventana"<<std::endl;
			std::cout << "Ingrese el nivel de polarizado de la ventana: "; std::cin >> nivelPolarizado;
			if(nivelPolarizado>100)
				std::cerr<<""
			std::cout << "Ingrese el estado de la ventana (1 para abierta, 0 para cerrada): "; std::cin >> estadoBoolVentana;
			if (estadoBoolVentana == 1) estBool = true;
			else estBool = false;
			venPtr = new Ventana(estBool, nivelPolarizado);	
			std::cout << "Creacion de la puerta" << std::endl;
			std::cout << "Ingrese el estado de la puerta (1 para abierta, 0 para cerrada): "; std::cin >> estadoBoolPuerta;
			if (estadoBoolPuerta == 1) estBool = true;
			else estBool = false;
			std::cout << "Ingrese el codigo de la puerta: "; std::cin >> codigoPuerta;
			puePtr = new Puerta(codigoPuerta, estBool, venPtr);
			std::cout << "Creacion del vehiculo" << std::endl;
			std::cout << "Ingrese la placa del vehiculo: "; std::cin >> placa;
			std::cout << "Ingrese el estado del vehiculo (1 para prendido, 0 para apagado): "; std::cin >> estadoBoolVehiculo;
			if (estadoBoolVehiculo == 1) estBool = true;
			else estBool = false;
			vehPtr = new Vehiculo(placa, puePtr, estBool);
			if (contPtr->ingresarVehiculo(*vehPtr) == false)
				std::cerr << "No se logro ingresar el vehiculo" << std::endl;
			else
				std::cout << "Vehiculo ingresado correctamente" << std::endl;
			break;
		case 2:
			std::cout << contPtr->toString();
			system("pause");
			break;
		case 3:
			std::cout << "Saliendo..." << std::endl;
			break;
		default:
			std::cerr << "Opcion no valida" << std::endl;
			break;
		}
    } while (op != 3);

    return 0;
}


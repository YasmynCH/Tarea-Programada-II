#ifndef EMPLEADOCONTRATADO_H
#define EMPLEADOCONTRATADO_H

#include <iostream>
#include "empleado.h"
#include <vector>
#include <string>


using namespace std;

class EmpleadoContratado{

    vector<Empleado *> listaEmpleados;

    public:
    EmpleadoContratado();

    void AgregarEmpleado(Empleado *empleado);
    string ObtenerNombreCompleto();
    int ObtenerIdSupervisor();
    int ObtenerTipoEmpleado();


    friend std::ostream& operator << (std::ostream &o, const EmpleadoContratado *empleadoContratado);
};


#endif
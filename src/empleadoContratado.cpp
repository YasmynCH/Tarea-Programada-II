#include "empleadoContratado.h"
#include <iostream>
#include <sstream>
#include <string>

EmpleadoContratado::EmpleadoContratado(){


}

void EmpleadoContratado::AgregarEmpleado (Empleado *empleado){
    
    this->listaEmpleados.push_back(empleado);

}

string EmpleadoContratado::ObtenerNombreCompleto(){

    string nombreCompleto= "";

    nombreCompleto = this->ObtenerNombreCompleto(); 
    return nombreCompleto;
}


int EmpleadoContratado::ObtenerIdSupervisor(){

    return this->ObtenerIdSupervisor(); 
}

int EmpleadoContratado::ObtenerTipoEmpleado(){

    return this->ObtenerTipoEmpleado(); 
}


std::ostream& operator << (std::ostream &o, const EmpleadoContratado *empleadoContratado){

    for (Empleado *empleadoNuevo : empleadoContratado -> listaEmpleados){

        o << empleadoContratado << endl;
    }

    return o;

}

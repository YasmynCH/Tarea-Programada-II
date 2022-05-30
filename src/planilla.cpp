#include <map>
#include "empleadoContratado.h"
#include "empleadoNomina.h"
#include "planilla.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;



Planilla::Planilla(istream *streamPersonas, istream *streamNomina, istream *streamHorasTrabajadas){

    this-> streamEntradaPersonas=streamPersonas;
    this-> streamEntradaNomina=streamNomina;
    this-> streamHorasEntradaTrabajadas= streamHorasTrabajadas;
}

Planilla::~Planilla(){

    if (this-> primerEmpleado != nullptr){
        
        delete this->primerEmpleado;
    }

}

void Planilla::AgregarEmpleado (EmpleadoContratado *empleadoNuevo){

    

}

string Planilla::NombreCompleto(int idEmpleadoBuscado){

    EmpleadoContratado *empleadoABuscar = this->indiceEmpleados.at(idEmpleadoBuscado);
    return empleadoABuscar->ObtenerNombreCompleto();

}

int Planilla::IdSupervisor(int idSupervisor){

    EmpleadoContratado *empleadoABuscar = this->indiceEmpleados.at(idSupervisor);
    return empleadoABuscar->ObtenerIdSupervisor();

}
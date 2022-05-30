#ifndef PLANILLA_H
#define PLANILLA_H

#include "empleadoContratado.h"
#include <map>
#include <iostream>
#include <string>

using namespace std;

class Planilla{

    istream *streamEntradaPersonas;
    istream *streamEntradaNomina;
    istream *streamHorasEntradaTrabajadas;

    EmpleadoContratado *primerEmpleado;

    std::map<int, EmpleadoContratado *> indiceEmpleados;
    std::map<int, string *> indiceNomina;
    std::map<int, string *> indiceHorasTrabajadas;

public:
    
    Planilla(istream *streamPersonas, istream *streamNomina, istream *streamHorasTrabajadas);
    ~Planilla();

    void AgregarEmpleado(EmpleadoContratado *empleado);
    string NombreCompleto(int idEmpleadoBuscado);
    int IdSupervisor(int idSupervisor);

    friend std::ostream &operator<<(std::ostream &o, const Planilla *planilla);
    friend std::istream &operator>>(std::istream &i, Planilla *planilla);
};

#endif
#ifndef EMPLEADONOMINA_H
#define EMPLEADONOMINA_H

#include "empleado.h"
#include <string>

using namespace std;


class EmpleadoNomina : public Empleado{

    int idEmpleado;
    string nombre;
    string apellido;
    string email; 
    int tipoEmpleado;
    int idSupervisor;
    float pagoMensual;
    

    public: 
    
    EmpleadoNomina(int idEmpleado, string nombre, string apellido, string email, int tipoEmpleado, int idSupervisor, float pagoMensual);
    
    virtual float CalculoDePago();
    string ObtenerNombreCompleto();
    int ObtenerIdSupervisor();
    int ObtenerTipoEmpleado();


    friend istream& operator >> (istream &o, EmpleadoNomina *empleadoNomina);
    friend ostream& operator << (ostream &o, const EmpleadoNomina *empleadoNomina);
};


#endif
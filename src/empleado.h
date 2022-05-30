#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

using namespace std; 

class Empleado {

    int idEmpleado;
    string nombre;
    string apellido;
    string email;
    int tipoEmpleado;
    int idSupervisor;

    public:

    virtual float CalculoDePago() = 0;
    virtual string ObtenerNombreCompleto() = 0;
    virtual int ObtenerIdSupervisor()=0;

    
    friend istream& operator >> (istream &o, Empleado *empleado);
    friend ostream& operator << (ostream &o, const Empleado *empleado);
};

#endif
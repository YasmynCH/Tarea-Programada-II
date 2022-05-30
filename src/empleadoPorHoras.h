#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include <string>
#include "empleado.h"

using namespace std;

class EmpleadoPorHoras : public Empleado{

    int idEmpleado;
    string nombre;
    string apellido;
    string email;
    int tipoEmpleado;
    int idSupervisor;
    float pagoPorHora;
    int horasTrabajadas;

public:
    EmpleadoPorHoras(int idEmpleado, string nombre, string apellido, string email, int tipoEmpleado, int idSupervisor, float pagoPorHora, int horasTrabajadas);

    virtual float CalculoDePago();
    string ObtenerNombreCompleto();
    int ObtenerIdSupervisor();
    int ObtenerTipoEmpleado();


    friend std::ostream &operator<<(std::ostream &o, const EmpleadoPorHoras *empleadosPorHoras);
    friend std::istream &operator>>(std::istream &i, EmpleadoPorHoras *empleadosPorHoras);
};

#endif

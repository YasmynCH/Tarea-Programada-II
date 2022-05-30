#include "empleadoPorHoras.h"
#include "empleadoContratado.h"
#include <iostream>
#include <string>

using namespace std; 

EmpleadoPorHoras::EmpleadoPorHoras(int idEmpleado, string nombre, string apellido, string email, int tipoEmpleado, int idSupervisor, float pagoPorHora, int horasTrabajadas) {

    this -> idEmpleado = idEmpleado;
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> email = email; 
    this -> tipoEmpleado = tipoEmpleado;
    this -> idSupervisor = idSupervisor;
    this -> pagoPorHora = pagoPorHora;
    this -> horasTrabajadas = horasTrabajadas;

}

float EmpleadoPorHoras::CalculoDePago(){

    float salario=0;;

    salario= this -> pagoPorHora* this ->horasTrabajadas;
    
    return salario;

}

string EmpleadoPorHoras::ObtenerNombreCompleto(){

    string nombreCompleto="";

    nombreCompleto=this -> nombre+ " " + this -> apellido;

    return nombreCompleto;
}

int EmpleadoPorHoras::ObtenerIdSupervisor(){

    return this -> idSupervisor;

}

int EmpleadoPorHoras::ObtenerTipoEmpleado(){

    return this-> tipoEmpleado;

}

ostream& operator << (ostream &o, const EmpleadoPorHoras *empleadoPorHoras){

    o << empleadoPorHoras->idEmpleado << "," << empleadoPorHoras->nombre << "," << empleadoPorHoras->email<< "," <<empleadoPorHoras->tipoEmpleado<< "," <<empleadoPorHoras->idSupervisor << "," <<empleadoPorHoras->pagoPorHora<< "," <<empleadoPorHoras->pagoPorHora << endl;

    return o;
}

istream& operator >> (istream &i, EmpleadoPorHoras *empleadoPorHoras){

    i >> empleadoPorHoras->idEmpleado; //>> "," >> empleadoPorHoras->nombre >> "," >> empleadoPorHoras->email>> "," >>empleadoPorHoras->tipoEmpleado>> "," >>empleadoPorHoras->idSupervisor >> "," >>empleadoPorHoras->pagoPorHora>> "," >>empleadoPorHoras->pagoPorHora >> endl;

    return i;
}

/*istream& operator >> (istream &i, EmpleadoContratado *empleadoPorHoras){
    
    string linea;

    while (std::getline(i, linea)) {
    

        //std::istringstream str(linea);

        EmpleadoContratado *nuevoEmpleado = new EmpleadoContratado();
        //streamPersonas >> nuevoEmpleado;

        //empleadoPorHoras->AgregarEmpleado(nuevoEmpleado);
    }
    }*/
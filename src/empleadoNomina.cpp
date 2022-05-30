#include "empleadoNomina.h"
#include "empleadoContratado.h"
#include <iostream>
#include <string>

using namespace std;

EmpleadoNomina::EmpleadoNomina(int idEmpleado, string nombre, string apellido, string email, int tipoEmpleado, int idSupervisor, float pagoMensual) {

    this -> idEmpleado = idEmpleado;
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> email = email; 
    this -> tipoEmpleado = tipoEmpleado;
    this -> idSupervisor = idSupervisor;
    this -> pagoMensual = pagoMensual;


}

float EmpleadoNomina::CalculoDePago(){

    return this -> pagoMensual;

}

string EmpleadoNomina::ObtenerNombreCompleto(){

    string nombreCompleto="";

    nombreCompleto=this -> nombre+ " " + this -> apellido;

    return nombreCompleto;
}

int EmpleadoNomina::ObtenerIdSupervisor(){

    return this -> idSupervisor;

}

int EmpleadoNomina::ObtenerTipoEmpleado(){

    return this -> tipoEmpleado;

}

ostream& operator << (ostream &o, const EmpleadoNomina *empleadoNomina){

    o << empleadoNomina->idEmpleado << "," << empleadoNomina->nombre << "," << empleadoNomina->email<< "," <<empleadoNomina->tipoEmpleado<< "," <<empleadoNomina->idSupervisor << "," <<empleadoNomina->pagoMensual << endl;

    return o;
}

istream& operator >> (istream &i, EmpleadoNomina *empleadoNomina){

    i >> empleadoNomina->idEmpleado; //>> "," >> empleadoNomina->nombre >> "," >> empleadoNomina->email>> "," >>empleadoNomina->tipoEmpleado>> "," >>empleadoNomina->idSupervisor >> "," >>empleadoNomina->pagoMensual >> endl;

    return i;
}

/*istream& operator >> (istream &i, EmpleadoContratado *empleadoNomina){
    
    string linea;

    while (std::getline(i, linea)) {
    

        //std::istringstream str(linea);

        EmpleadoContratado *nuevoEmpleado = new EmpleadoContratado();
        
        //streamPersonas >> nuevoEmpleado;

        //empleadoNomina->AgregarEmpleado(nuevoEmpleado);
    }
    }*/
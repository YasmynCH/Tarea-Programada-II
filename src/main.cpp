#include <sstream>
#include <iostream>
#include <string>
#include <fstream>

#include "empleado.h"
#include "empleadoContratado.h"
#include "empleadoNomina.h"
#include "empleadoPorHoras.h"
#include "planilla.h"


using namespace std;

int main() {

    Planilla *planilla = new Planilla();

    ifstream archivoPersonas("personas.txt", std::ifstream::in); 
    

    if (!archivoPersonas.is_open()){

    std::cerr << "Error abriendo archivo personas.txt" << std::endl;
    return -1;
    }

    archivoPersonas >> planilla;

    cout << "Planilla: " << planilla;

    archivoPersonas.close();




    ifstream archivoNomina("nomina.txt", std::ifstream::in); 
    

    if (!archivoNomina.is_open()){
        std::cerr << "Error abriendo archivo nomina.txt" << std::endl;
        return -1;
    }

    archivoNomina >> planilla;

    cout << "Sueldo empleado asalariados: " << planilla;

    archivoNomina.close();


    ifstream archivoHorasTrabajadas("horastrabajadas.txt", std::ifstream::in); 
    

    if (!archivoHorasTrabajadas.is_open()){
        std::cerr << "Error abriendo archivo horas trabajadas.txt" << std::endl;
        return -1;
    }

    archivoHorasTrabajadas >> planilla;

    cout << "Planilla: " << planilla;

    archivoHorasTrabajadas.close();

    delete planilla;


    Planilla *planilla= new Planilla();

    fstream reporte("reportePlanilla.csv", std::ifstream::out); 
    if (!reporte.is_open())
    {
        std::cerr << "Error abriendo archivo reportePlanilla.csv" << std::endl;
        return -1;
    }

    reporte << planilla;
    
    reporte.close();

    delete planilla;

}

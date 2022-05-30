#include <gtest/gtest.h>
#include "../src/empleadoContratado.h"
#include "../src/empleadoNomina.h"
#include "../src/empleado.h"

namespace
{
    TEST(Nodo_Test, Test_Creacion_Nodo)
    {
        /// AAA
        int idEmpleado=2;
        string nombre= "Juan";
        string apellido= "Mora";
        string email="juanMora@mail.com";
        int tipoEmpleado=1;
        int idSupervisor=2;
        float pagoMensual=400.60;
        // Arrange - configurar el escenario
        EmpleadoNomina *nuevoEmpleado = new EmpleadoNomina(idEmpleado, nombre, apellido, email, tipoEmpleado, idSupervisor, pagoMensual);
        // Act - ejecute la operación
        //EmpleadoContratado *empleado = new EmpleadoContratado(*nuevoEmpleado);        

        int idActual = nuevoEmpleado->ObtenerIdSupervisor();
        int idEsperada = 1;

        int valorActual = nuevoEmpleado->ObtenerTipoEmpleado();
        int valorEsperado = 2;

        delete nuevoEmpleado;

        // Assert - valide los resultados
        EXPECT_EQ(idEsperada, idActual);
        EXPECT_EQ(valorEsperado, valorActual);
    }

    
    } 

    /*TEST(Nodo_Test, Test_Agregar_Nodo_Hijo)

    {
        /// AAA

        // Arrange - configurar el escenario
        Nodo *nodoPadre = new Nodo(1, 2);     

        // Act - ejecute la operación
        Nodo *nodoHijoEsperado = new Nodo(2, 7);   
        nodoPadre->InsertarHijo(nodoHijoEsperado);

        // Assert - valide los resultados
        vector<Nodo *> hijos = nodoPadre->ObtenerHijos();
        Nodo *nodoHijoActual = hijos[0];

        EXPECT_EQ(nodoHijoEsperado, nodoHijoActual);

        delete nodoHijoEsperado;
        delete nodoPadre;*/

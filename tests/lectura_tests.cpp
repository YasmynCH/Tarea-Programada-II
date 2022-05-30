#include <gtest/gtest.h>
#include "../src/empleadoContratado.h"
#include "../src/planilla.h"

namespace
{
    TEST(Lectura_Test, Test_PorLinea)
    {
        /// AAA

        // Arrange - configurar el escenario
        string stringEntrada = "Juan Perez juanPerez@mail.com 2 1 450.3";
        
        istringstream stream(stringEntrada);

        EmpleadoContratado *empleado = new EmpleadoContratado();

        // Act - ejecute la operación
        Empleado *actual = 0;//empleado->AgregarEmpleado();
        int esperada = 4;

        delete empleado;

        // Assert - valide los resultados
        //EXPECT_EQ(esperada, actual);
    }
}
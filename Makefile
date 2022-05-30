FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/empleadoNomina.cpp -o bin/empleadoNomina.o
	g++ $(FLAGS) src/empleadoPorHoras.cpp -o bin/empleadoPorHoras.o
	g++ $(FLAGS) src/empleadoContratado.cpp -o bin/empleadoContratado.o
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/tarea-II bin/empleadoContratado.o bin/empleadoNomina.o bin/empleadoPorHoras.o bin/planilla.o bin/main.o 
	
test:
	mkdir -p bin
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ $(FLAGS) src/empleadoNomina.cpp -o bin/empleadoNomina.o
	g++ $(FLAGS) src/empleadoPorHoras.cpp -o bin/empleadoPorHoras.o
	g++ $(FLAGS) src/empleadoContratado.cpp -o bin/empleadoContratado.o
	g++ $(FLAGS) tests/empleado_tests.cpp -o bin/empleado_tests.o
	g++ -g -o bin/tests bin/planilla.o bin/empleadoNomina.o bin/empleadoContratado.o bin/empleadoPorHoras.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin
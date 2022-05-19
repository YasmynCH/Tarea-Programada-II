FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/envioTipo1.cpp -o bin/envioTipo1.o
	g++ $(FLAGS) src/envioTipo2.cpp -o bin/envioTipo2.o
	g++ $(FLAGS) src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/Tarea-I bin/envioTipo1.o bin/envioTipo2.o bin/tipoEnvio.o bin/main.o



	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/tests_envioTipo1_calculoEnvio.cpp -o bin/tests_envioTipo1_calculoEnvio.o
	g++ $(FLAGS) tests/tests_envioTipo2_calculoEnvio.cpp -o bin/tests_envioTipo2_calculoEnvio.o
	g++ $(FLAGS) src/envioTipo1.cpp -o bin/envioTipo1.o
	g++ $(FLAGS) src/envioTipo2.cpp -o bin/envioTipo2.o
	g++ $(FLAGS) src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ -g -o bin/tests bin/tests_envioTipo1_calculoEnvio.o bin/tests_envioTipo2_calculoEnvio.o bin/envioTipo2.o bin/envioTipo1.o bin/tipoEnvio.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin
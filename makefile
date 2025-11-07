run : ./bin/examen
	./bin/examen

bin/examen : src/Examen_2doParcial.cpp include/*/*.hpp
	@mkdir -p bin
	c++ -Iinclude -o bin/examen src/Examen_2doParcial.cpp -lftxui-component -lftxui-dom -lftxui-screen

run2 : ./bin/vaca
	./bin/vaca

bin/vaca : src/tui.cpp 
	c++ src/tui.cpp -o bin/vaca -lftxui-screen -lftxui-dom -lftxui-component
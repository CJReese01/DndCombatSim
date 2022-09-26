INSTALL=install
OBJS=$(INSTALL)\objs
BIN=$(INSTALL)\bin

run: depend
	g++ -o $(BIN)\CombatSim CombatSim.cpp $(OBJS)\Entity.o 

depend: setup
	g++ -c -o $(OBJS)\Entity.o Entity.cpp
setup: clean
	mkdir $(OBJS)
	mkdir $(BIN)

clean:
	rmdir /S /Q $(INSTALL)
	cls
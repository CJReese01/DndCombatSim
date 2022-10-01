INSTALL=install
OBJS=$(INSTALL)\objs
BIN=$(INSTALL)\bin
INVIN=$(OBJS)\Inventory
EVERYTHING =$(OBJS)\Entity.o $(INVIN)\Item.o $(INVIN)\Damage.o

run: depend
	g++ -o $(BIN)\CombatSim CombatSim.cpp $(EVERYTHING)

depend: setup
	g++ -c -o $(INVIN)\Damage.o Inventory\Damage.cpp
	g++ -c -o $(INVIN)\Item.o Inventory\Item.cpp $(INVIN)\Damage.o
	g++ -c -o $(OBJS)\Entity.o Entity.cpp $(INVIN)\Item.o
setup: clean
	mkdir $(OBJS)
	mkdir $(INVIN)
clean:
	rmdir /S /Q $(OBJS)
	
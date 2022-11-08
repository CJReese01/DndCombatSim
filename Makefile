INSTALL=install
OBJS=$(INSTALL)\objs
BIN=$(INSTALL)\bin
INVIN=$(OBJS)\Inventory
EVERYTHING =$(OBJS)\Entity.o $(INVIN)\Item.o $(OBJS)\Roll.o

run: depend
	g++ -o $(BIN)\CombatSim CombatSim.cpp $(EVERYTHING)

depend: setup
	g++ -c -o $(OBJS)\Roll.o Roll.cpp
	g++ -c -o $(INVIN)\Item.o Inventory\Item.cpp
	g++ -c -o $(OBJS)\Entity.o Entity.cpp
setup: clean
	mkdir $(OBJS)
	mkdir $(INVIN)
clean:
	rmdir /S /Q $(OBJS)
	
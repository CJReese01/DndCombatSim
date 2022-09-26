INSTALL=install
OBJS=$(INSTALL)/objs
BIN=$(INSTALL)/bin
GTEST_ROOT=C:\Users\The_C\OneDrive\Documents\DndCombatSim
GTEST_INC=$(GTEST_ROOT)/include
GTEST_LIB=$(GTEST_ROOT)/lib

run: depend
	g++ -o $(BIN)/CombatSim CombatSim.cpp $(BIN)/Entity.o 

depend: setup
	g++ -c -o $(OBJS)/Entity.o Entity.cpp
setup: clean
	mkdir -p $(OBJS)
	mkdir -p $(BIN)

clean:
	rm -rf $(INSTALL)
	clear
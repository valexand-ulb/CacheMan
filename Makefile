COMPIL = -c

output: bonus.o DisplayMenu.o entity.o Game.o Ghost.o Matrice.o Person.o Player.o position.o
	g++ main.cpp bonus.o DisplayMenu.o entity.o Game.o Ghost.o Matrice.o Person.o Player.o position.o -o output #$(COMPIL)


*.o: *.cpp *.hpp
	g++ *.cpp *.hpp -c

clean: 
	rm *.o *.hpp.gch output

re: clean output
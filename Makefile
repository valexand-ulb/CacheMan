COMPIL = -c

output: Bonus.o DisplayMenu.o Entity.o Game.o Ghost.o Matrice.o Person.o Player.o Position.o
	g++ main.cpp Bonus.o DisplayMenu.o Entity.o Game.o Ghost.o Matrice.o Person.o Player.o Position.o -o output #$(COMPIL)


*.o: *.cpp *.hpp
	g++ *.cpp *.hpp -c


re: clean2 output

clean: 
	rm *.o *.hpp.gch output

clean2: 
	rm *.o output


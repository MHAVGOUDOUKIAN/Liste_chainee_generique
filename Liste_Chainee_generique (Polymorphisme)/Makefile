CC = g++
EXEC = main
FLAGS = -Wall -Werror -pedantic
STD = -std=c++17
O = obj/Debug
B = bin/Debug

all: $(O) $(B) $(O)/main.o
	$(CC) $(O)/*.o -o $(B)/$(EXEC) $(FLAGS)

$(O)/main.o: $(O)/Car.o $(O)/ListeAdapt.o $(O)/ListeAdaptMaillon.o
	$(CC) main.cpp -c -o $(O)/main.o $(STD) $(FLAGS)

$(O)/Car.o:
	$(CC) Car.cpp -c -o $(O)/Car.o $(STD) $(FLAGS)

$(O)/ListeAdapt.o: $(O)/ListeAdaptMaillon.o $(O)/Car.o
	$(CC) ListeAdapt.cpp -c -o $(O)/ListeAdapt.o $(STD) $(FLAGS)

$(O)/ListeAdaptMaillon.o: $(O)/Car.o
	$(CC) ListeAdaptMaillon.cpp -c -o $(O)/ListeAdaptMaillon.o $(STD) $(FLAGS)

clean: $(O) $(B)
	rm -r $(O)
	rm -r $(B)

$(O):
	mkdir $(O)

$(B):
	mkdir $(B)
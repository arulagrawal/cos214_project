#main: *.o
#	g++ -o main *.o
#
#*.o: *.h *.cpp
#	g++ -g -c *.cpp
#
#run:
#	./main
#
#clean:
#	rm *.o main
#
OBJS	= main.o Core.o Falcon.o Falcon9.o MerlinRocket.o MerlinVac.o Stage.o StageOne.o StageTwo.o 
SOURCE	= main.cpp Core.cpp Falcon.cpp Falcon9.cpp MerlinRocket.cpp MerlinVac.cpp Stage.cpp StageOne.cpp StageTwo.cpp 
HEADER	= Core.h Falcon.h Falcon9.h MerlinRocket.h MerlinVac.h Stage.h StageOne.h StageTwo.h
OUT	= a.out
CC	 = g++
FLAGS	 = -g -c 
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)


main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

Core.o: Core.cpp
	$(CC) $(FLAGS) Core.cpp

Falcon.o: Falcon.cpp
	$(CC) $(FLAGS) Falcon.cpp

Falcon9.o: Falcon9.cpp
	$(CC) $(FLAGS) Falcon9.cpp

MerlinRocket.o: MerlinRocket.cpp
	$(CC) $(FLAGS) MerlinRocket.cpp

MerlinVac.o: MerlinVac.cpp
	$(CC) $(FLAGS) MerlinVac.cpp

Stage.o: Stage.cpp
	$(CC) $(FLAGS) Stage.cpp

StageOne.o: StageOne.cpp
	$(CC) $(FLAGS) StageOne.cpp

StageTwo.o: StageTwo.cpp
	$(CC) $(FLAGS) StageTwo.cpp

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
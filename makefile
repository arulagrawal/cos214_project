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
OBJS	= main.o Core.o Falcon.o Falcon9.o MerlinRocket.o MerlinVac.o Stage.o StageOne.o StageTwo.o FalconHeavy.o CoreAdapter.o Dragon.o DragonCrew.o Spacecraft.o StageAttached.o StageDettached.o
SOURCE	= main.cpp Core.cpp Falcon.cpp Falcon9.cpp MerlinRocket.cpp MerlinVac.cpp Stage.cpp StageOne.cpp StageTwo.cpp FalconHeavy.cpp CoreAdapter.cpp Dragon.cpp DragonCrew.cpp Spacecraft.cpp StageAttached.cpp StageDettached.cpp
HEADER	= Core.h Falcon.h Falcon9.h MerlinRocket.h MerlinVac.h Stage.h StageOne.h StageTwo.h FalconHeavy.h CoreAdapter.h Dragon.h DragonCrew.h Spacecraft.h StageAttached.h StageDettached.h
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

FalconHeavy.o: FalconHeavy.cpp
	$(CC) $(FLAGS) FalconHeavy.cpp

CoreAdapter.o: CoreAdapter.cpp
	$(CC) $(FLAGS) CoreAdapter.cpp

Dragon.o: Dragon.cpp
	$(CC) $(FLAGS) Dragon.cpp

DragonCrew.o: DragonCrew.cpp
	$(CC) $(FLAGS) DragonCrew.cpp

Spacecraft.o: Spacecraft.cpp
	$(CC) $(FLAGS) Spacecraft.cpp

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
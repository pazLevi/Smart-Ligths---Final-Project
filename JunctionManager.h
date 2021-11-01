#pragma once
#include "Junction.h"
#include "glut.h"
#pragma warning (disable:4996)

class JunctionManager
{
private:
	int frames = 0;
	int framesRestarts = 0;
	int carsCounter = 0;
	int stuck = 0;
	Junction junctions[LENGTH][LENGTH];
	Road roads[LENGTH][LENGTH][4];
	Car cars[NUM_OF_CARS];

public:
	void initJunctions();
	void readLightsTimes();
	void initRoads();
	void initCarsAndMatchRoads();
	void putCarsOnRoads();
	void setInitialPositionOnRoads();
	void initGreens();
	void writeRoadsStuckToFile();
	bool deadlockCheck();
	bool finish();
	void move(Junction* junction);
	bool checkIfCarCanLeave(Junction* current);
	void drawAll();
	void writeToFile(int frames);
	void carLeave(int i, int j);
	void carStuck(int i, int j);
	void checkAndChangeGreenLight(int i, int j);
	// a function taht moves on all junctions and checks where the first car in the green light need to leave
	void moveAll();
	void framesCheck();
};


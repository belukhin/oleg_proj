#ifndef SRC_H
#define SRC_H

#include <iostream>
#include "src.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

const int NUM_OF_STUDS = 10;
const string OPS[2] = {"Cred", "Dep"};
const string FIRST_NAME[NUM_OF_STUDS] = {"Artem   ", "Michail ", "Ivan    ", "Vladimir", "Uriy    ", "Oleg    ", "Dmitriy ", "Leonid  ", "Alex    ", "Max     "};
const string LAST_NAME[NUM_OF_STUDS] = {"    Krug", " Antonov", "   Pupin", "  Zaycev", "   Lupin", " Golovin", "   Kotov", " Abramov", "  Bagaev", "Karasyov"};

struct Bank
{
	int id;
	string name;
	int age;
	string operate;
	int stsum;
	float perc;
	float yearprof;
	int timeofrepay;
	int timenow;
	float nowsum;
};

void Gen(Bank * bank);
void Print(Bank * bank);
void Help();

#endif
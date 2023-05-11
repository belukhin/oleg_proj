#ifndef SRC_H
#define SRC_H

const int NUM_OF_STUDS = 10;
const std::string OPS[2] = {"Cred", "Dep"};
const std::string FIRST_NAME[NUM_OF_STUDS] = {"Artem   ", "Michail ", "Ivan    ", "Vladimir", "Uriy    ", "Oleg    ", "Dmitriy ", "Leonid  ", "Alex    ", "Max     "};
const std::string LAST_NAME[NUM_OF_STUDS] = {"    Krug", " Antonov", "   Pupin", "  Zaycev", "   Lupin", " Golovin", "   Kotov", " Abramov", "  Bagaev", "Karasyov"};

struct Bank
{
	int id;
	std::string name;
	int age;
	std::string operate;
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
//void Min(Bank * bank);
//void Max(Bank * bank);
//void AvgAge(Bank * bank);

#endif
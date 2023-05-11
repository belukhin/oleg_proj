#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

const int NUM_OF_STUDS = 10;

const string OPS[2] = {"Cred", "Dep"};
const string FIRST_NAME[NUM_OF_STUDS] = {"Artem   ", "Michail ", "Ivan    ", "Vladimir", "Uriy    ", "Oleg    ", "Dmitriy ", "Leonid  ", "Alex    ", "Max     "};
const string LAST_NAME[NUM_OF_STUDS] = {"    Krug", " Antonov", "   Pupin", "  Zaycev", "   Lupin", " Golovin", "   Kotov", " Abramov", "  Bagaev", "Karasyov"};

class Stud;

class Bank
{
private:
	vector<Stud*> studs;
	int timenow;
public:
	Bank(unsigned int num_of_studs);
	~Bank();
	void Print();
};

class Stud
{
private:
	int id;
	string name;
	int age;
	string operate;
	int stsum;
	float perc;
	float yearprof;
	int timeofrepay;
	float nowsum;
public:
	Stud(   
			int id, 			// id
			string name, 		// name
			int age, 			//age
			string operate, 	// "Dep" or "Cred" - "Deposit" or "Credit"
			int stsum, 			// Sam - starting amout of money
			float perc, 		// %
			float yearprof, 	// Ppy - profit per year
			int timeofrepay, 	// time of repay
			float nowsum 		// Cam - current amount of money
		);
	~Stud();
	
	int            get_id           () {return id			;}
	string         get_name         () {return name			;}
	int            get_age          () {return age			;}
	string         get_operate      () {return operate		;}
	int            get_stsum        () {return stsum		;}
	float          get_perc         () {return perc			;}
	float          get_yearprof     () {return yearprof		;}
	int            get_timeofrepay  () {return timeofrepay	;}
	float          get_nowsum       () {return nowsum		;}


	void           set_id           (int    id         ) {this->id         =id         ;} 
	void           set_name         (string name       ) {this->name       =name       ;} 
	void           set_age          (int    age        ) {this->age        =age        ;} 
	void           set_operate      (string operate    ) {this->operate    =operate    ;} 
	void           set_stsum        (int    stsum      ) {this->stsum      =stsum      ;} 
	void           set_perc         (float  perc       ) {this->perc       =perc       ;} 
	void           set_yearprof     (float  yearprof   ) {this->yearprof   =yearprof   ;} 
	void           set_timeofrepay  (int    timeofrepay) {this->timeofrepay=timeofrepay;} 
	void           set_nowsum       (float  nowsum     ) {this->nowsum     =nowsum     ;} 
};

/*Menu functions*/
void Help();
void PrintTitles();
void PrintCommands();

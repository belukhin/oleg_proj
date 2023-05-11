#include "src.h"

Bank::Bank(unsigned int num_of_studs)
{
	
	srand(time(0));
	timenow = rand() % 5 + 1;

	int id = rand() % 9999 + 1;
	string name;
	int age;
	string operate;
	int stsum;
	float perc;
	float yearprof;
	int timeofrepay;
	float nowsum;

	for(int i = 0; i < NUM_OF_STUDS; i++){
		id += 1;														// id
		name = FIRST_NAME[rand() % 10] + " " + LAST_NAME[rand() % 10];	// name
		age = rand() % 72 + 18;											//age
		operate = OPS[rand() % 2];										// "Dep" or "Cred" - "Deposit" or "Credit"
		stsum = (rand() % 5 + 1) * 1000;								// Sam - starting amout of money
		perc = rand() % 12 + 1;											// %
		yearprof = stsum * perc / 100.0;								// Ppy - profit per year
		timeofrepay = rand() % 6 + 7;									// time of repay
		nowsum = stsum + yearprof * timenow;							// Cam - current amount of money
				
		studs.push_back(new Stud(id, name, age, operate, stsum, perc, yearprof, timeofrepay, nowsum));
	}
	cout << "the bank has been successfully generated" << endl;
}

Bank::~Bank()
{
	for (auto s : studs)
		delete s;
	studs.clear();
}

void Bank::Print()
{
	cout << "|_______|_______________________|_______|_______|_______|_______|_______|_______|" << endl;
	cout << "|ID""\t" << "|Name""\t""\t""\t" << "|Age""\t" << "|Op""\t" << "|Sam""\t" << "|%""\t" << "|Ppy""\t" << "|Cam""\t|" << endl;
	cout << "|_______|_______________________|_______|_______|_______|_______|_______|_______|" << endl;
	for(auto s : studs)
	{
		cout << "|" << s->get_id() << "\t|" 
					<< s->get_name() << "\t|" 
					<< s->get_age() << "\t|" 
					<< s->get_operate() << "\t|" 
					<< s->get_stsum() << "\t|" 
					<< s->get_perc() << "\t|" 
					<< s->get_yearprof() << "\t|" 
					<< s->get_nowsum() << "\t|" 
			 << endl;
		cout << "|_______|_______________________|_______|_______|_______|_______|_______|_______|" << endl;
	}
}

Stud::Stud(int id, string name, int age, string operate, int stsum, float perc, float yearprof, int timeofrepay, float nowsum)
{
	this->id         =id         ;
	this->name       =name       ;
	this->age        =age        ;
	this->operate    =operate    ;
	this->stsum      =stsum      ;
	this->perc       =perc       ;
	this->yearprof   =yearprof   ;
	this->timeofrepay=timeofrepay;
	this->nowsum     =nowsum     ;
}

Stud::~Stud()
{
}

/*Menu functions*/
void Help()
{
	cout << "Enter \"commands\" to see list of commands" << endl;
	cout << "Enter \"titles\" to see help on title of table" << endl;
	string choose = " ";
	cin >> choose;
	if (choose == "commands" || choose == "c")
	{
		PrintCommands();
		return;
	}
	if (choose == "titles" || choose == "t")
	{
		PrintTitles();
		PrintCommands();
		return;
	}
	cout << "Unknown command, returning to main menu" << endl;
}

inline void PrintTitles(){
	cout << "Op - operation, may be \"Dep\" or \"Cred\" what means \"Deposit\" and \"Credit\"" << endl;
	cout << "Sam - starting amout of money" << endl;
	cout << "Ppy - profit per year" << endl;
	cout << "Cam - current amount of money" << endl;
}

inline void PrintCommands(){
	cout << "\n\n";
	cout << "List of commands:" << endl;
	cout << "gen   - Generate new data" << endl;
	cout << "print - Show all students' records" << endl;
	cout << "help  - Show list of commands" << endl;
	cout << "(NA)  min   - Show minimum average marks and student with it" << endl;
	cout << "(NA)  max   - Show maximum average marks and student with it" << endl;
	cout << "(NA)  aa    - Show average age of students" << endl;
	cout << "exit  - Exit from program" << endl;
}



/*void Min(Marks * marks)
{
	float minMark = 6.0;
	string minStud = " ";
	for (int i = 0; i < 10; i++)
	{
		if (marks[i].avg < minMark)
			{
				minMark = marks[i].avg;
				minStud = marks[i].fi;
			}
	}
	cout << "Minimum average mark is:   " << minMark << endl;
	cout << "Student with this mark is: " << minStud << endl;
}

void Max(Marks * marks)
{
	float maxMark = 0.0;
	string maxStud = " ";
	for (int i = 0; i < 10; i++)
	{
		if (marks[i].avg > maxMark)
			{
				maxMark = marks[i].avg;
				maxStud = marks[i].fi;
			}
	}
	cout << "Maximum average mark is:   " << maxMark << endl;
	cout << "Student with this mark is: " << maxStud << endl;
}

void AvgAge(Marks * marks)
{
	float avAge = 0.0;
	for (int i = 0; i < 10; i++)
		avAge += marks[i].age;
	avAge /= 10.0;
	cout << "Average age of students is: " << avAge << endl;
}*/
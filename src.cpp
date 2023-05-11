#include <iostream>
#include "src.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

void Gen(Bank * bank)
{
	srand(time(0));
	int idst = rand() % 9999 + 1;
	for (int i = 0; i < 10; i++)
	{
		bank[i].id = i + idst;
		bank[i].age = rand() % 72 + 18;
		bank[i].stsum = (rand() % 5 + 1) * 1000;
		bank[i].perc = rand() % 12 + 1;
		bank[i].timenow = rand() % 5 + 1;
		bank[i].yearprof = bank[i].stsum * bank[i].perc / 100.0;
		bank[i].nowsum = bank[i].stsum + bank[i].yearprof * bank[i].timenow;
		bank[i].timeofrepay = rand() % 6 + 7;
		bank[i].name = FIRST_NAME[rand() % 10] + " " + LAST_NAME[rand() % 10];
		bank[i].operate = OPS[rand() % 2];
	}
	cout << "New data generated" << endl;
}

void Print(Bank * bank)
{
	cout << "|_______|_______________________|_______|_______|_______|_______|_______|_______|" << endl;
	cout << "|ID""\t" << "|Name""\t""\t""\t" << "|Age""\t" << "|Op""\t" << "|Sam""\t" << "|%""\t" << "|Ppy""\t" << "|Cam""\t|" << endl;
	cout << "|_______|_______________________|_______|_______|_______|_______|_______|_______|" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "|" << bank[i].id << "\t|" << bank[i].name << "\t|" << bank[i].age << "\t|" << bank[i].operate << "\t|" << bank[i].stsum << "\t|" << bank[i].perc << "\t|" << bank[i].yearprof << "\t|" << bank[i].nowsum << "\t|" << endl;
		cout << "|_______|_______________________|_______|_______|_______|_______|_______|_______|" << endl;
	}
}

void Help()
{
	cout << "Enter \"commands\" to see list of commands" << endl;
	cout << "Enter \"titles\" to see help on title of table" << endl;
	bool incor = false;
	string choose = " ";
	cin >> choose;
	if (choose == "commands")
	{
		cout << "List of commands:" << endl;
		cout << "gen   - Generate new data" << endl;
		cout << "print - Show all students' records" << endl;
		cout << "help  - Show list of commands" << endl;
		cout << "min   - Show minimum average marks and student with it" << endl;
		cout << "max   - Show maximum average marks and student with it" << endl;
		cout << "aa    - Show average age of students" << endl;
		cout << "exit  - Exit from program" << endl;
		incor = true;
	}
	if (choose == "c")
	{
		cout << "List of commands:" << endl;
		cout << "gen   - Generate new data" << endl;
		cout << "print - Show all students' records" << endl;
		cout << "help  - Show list of commands" << endl;
		cout << "min   - Show minimum average marks and student with it" << endl;
		cout << "max   - Show maximum average marks and student with it" << endl;
		cout << "aa    - Show average age of students" << endl;
		cout << "exit  - Exit from program" << endl;
		incor = true;
	}
	if (choose == "titles")
	{
		cout << "Op - operation, may be \"Dep\" or \"Cred\" what means \"Deposit\" and \"Credit\"" << endl;
		cout << "Sam - starting amout of money" << endl;
		cout << "Ppy - profit per year" << endl;
		cout << "Cam - current amount of money" << endl;
		incor = true;
	}
	if (choose == "t")
	{
		cout << "Op - operation, may be \"Deposit\" or \"Credit\"" << endl;
		cout << "Sam - starting amout of money" << endl;
		cout << "Ppy - profit per year" << endl;
		cout << "Cam - current amount of money" << endl;
		incor = true;
	}
	if (!incor)
			cout << "Unknown command, returning to main menu" << endl;
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
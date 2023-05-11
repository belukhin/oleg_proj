#include <iostream>
#include "src.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
	Bank bank[NUM_OF_STUDS] = {0};
	Gen(bank);
	Help();
	while (true)
	{
		bool incor = false;
		string choose = " ";
		cout << endl;
		cin >> choose;
		cout << endl;
		if (choose == "g")
		{
			Gen(bank);
			incor = true;
		}
		if (choose == "generate")
		{
			Gen(bank);
			incor = true;
		}
		if (choose == "p")
		{
			Print(bank);
			incor = true;
		}
		if (choose == "print")
		{
			Print(bank);
			incor = true;
		}
		if (choose == "h")
		{
			Help();
			incor = true;
		}
		if (choose == "help")
		{
			Help();
			incor = true;
		}
		if (choose == "e")
		{
			cout << "Thanks for using!" << endl;
			system("pause");
			return 0;
		}
		if (choose == "exit")
		{
			cout << "Thanks for using!" << endl;
			system("pause");
			return 0;
		}
		if (!incor)
			cout << "Unknown command, try again" << endl;
	}
}
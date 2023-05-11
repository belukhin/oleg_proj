#include <iostream>
#include "src.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int MyMenu(Bank* bank){
	string choose;
	while (true)
	{
		choose.empty();
		cout << endl;
		cin >> choose;
		if (choose == "g" || choose == "generate")
		{
			delete bank;
			bank = new Bank(NUM_OF_STUDS); 
			PrintCommands();
			continue;
		}
		if (choose == "p" || choose == "print")
		{
			bank->Print(); 
			PrintCommands();
			continue;
		}
		if (choose == "h" || choose == "help")
		{
			Help(); continue;
		}
		if (choose == "e" || choose == "exit")
		{
			cout << "Thanks for using!" << endl;
			system("pause");
			return 0;
		}
		cout << "Unknown command, try again" << endl;
	}

	return 0;
	
}

int main()
{
	Bank* bank = new Bank(NUM_OF_STUDS);
	Help();
	return MyMenu(bank);
}
#include <iostream>
#include <string>

using namespace std;

void DisplayIntroduction();
void DisplayCurrentArea();
void DisplayBattle();

string InTakeStringsToProcess(string promptForUser);
string IntakeNumberToProcess(string promptForUser);

int main()
{
	DisplayIntroduction();
	DisplayCurrentArea();
	DisplayBattle();


	system("pause");
}

void DisplayIntroduction()
{
	cout << "\n\n *** Welcome to the story of a Knight fighting a Dragon, a classic tale of good versus evil. ***\n";
	cout << "\nThis tale starts when a knight at the entrance of a large cave.\n";
	cout << "\nThe Knight ";

	system("pause");
}

void DisplayCurrentArea()
{
	cout << "\nThe entrance of the cave rolled out heat as the dragon breathes.\n";
	string KnightNameID;
	KnightNameID = InTakeStringsToProcess("\nPlease tell us your name Sir Knight: ");

	cout << "\nNow that we know that name of Sir Knight \n";
	cout << KnightNameID << "Continue on you task of slaying the Dragon!\n";
}

string InTakeStringsToProcess(string promptForUser)
{
	//declaring vars
	string resultFromUserInput;
	//flag to flip of the user has a valid input
	bool isInputValid = false;

	//input loop
	do
	{
		//prompt user for input
		cout << promptForUser << endl;
		// to actually get the input
		getline(cin, resultFromUserInput);

		//check if the input is valid
		if (resultFromUserInput == " ")
		{
			cout << "\n\n *** Sir Knight I do know what you are trying to say please try again. ***\n\n";
			cout << "\n\n ** If you are having problems, Sir Knight I think you should go back to your training from your younger years. *** \n\n";
			isInputValid = false;
		}
		else
		{
			isInputValid = true;
		}
	}
	while (isInputValid == false);
	//continue when input is valid
	
	return resultFromUserInput;
}

string IntakeNumberToProcess(string promptForUser)
{
	//declaring vars
	string resultFromUserInput;
	//flag to flip of the user has a valid input
	bool isInputValid = false;

	//input loop
	do
	{
		//prompt user for input
		cout << promptForUser << endl;
		// to actually get the input
		getline(cin, resultFromUserInput);

		//check if the input is valid
		if (resultFromUserInput == " ")
		{
			cout << "\n\n *** Sir Knight I do know what you are trying to say please try again. ***\n\n";
			cout << "\n\n ** If you are having problems, Sir Knight I think you should go back to your training from your younger years. *** \n\n";
			isInputValid = false;
		}
		else
		{
			isInputValid = true;
		}
	} while (isInputValid == false);
	//continue when input is valid

	return resultFromUserInput;
}

void DisplayBattle()
{
	cout << "\nWhile walking into the cave you the dragon wakes ready to attack \n";
	cout << "You see the dragon breath fire at you\n";
	string userChoice;
	userChoice = IntakeNumberToProcess("\nWhat would you like to do?\nPlease enter number of choice\n1-Charge and attack the dragon\n2-Block the dragons attack\n");
	if (userChoice == "1")
	{
		cout << "You charge the dragon dodging the fire and stab the dragon in the heart!\n";
	}
	else if (userChoice == "2")
	{
		cout << "Blocking the attack was not a bright idea and you melted from the dragon's fire!\n";
	}
}
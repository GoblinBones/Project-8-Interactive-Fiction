#include <iostream>
#include <string>

using namespace std;
void GameEngine(string name);

int main ()
{
	string userName;
	userName = WelcomeUser();
	GameEngine(userName);
	system("pause");
}

void GameEngine(string name)
{
	cout << name << ", You are in one of the most advance classrooms on this floor. You look around and see other computer science students at workstations.'"
}
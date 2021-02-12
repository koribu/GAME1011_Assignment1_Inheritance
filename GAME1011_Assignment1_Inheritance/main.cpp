#include <iostream>
#include "Inheritance.h"
#include "Survey.h"

using namespace std;

int main()
{
	srand(unsigned(NULL));
	int pSize,isReady;
	
	cout << "Welcome to Game Survey!\nPlease enter number of participants for the Survey: ";
	cin >> pSize;
	if(pSize>500)
	{
		pSize = 500;
		cout << "It should be not higher than 500! Don't worry i accept it as 500!" << endl;
	}
	Survey survey(pSize);

	cout<<"Do you ready to process the survey?\n\n1. I am ready\n2. I scare! please don't!"<<endl;
	cin >> isReady;

	if(isReady==1)
	{
		survey.displaySurveyResult();
	}
	else if(isReady ==2)
	{
		cout << "Ohhh... Okey i don't." << endl << endl;
	}

	return 0;
}
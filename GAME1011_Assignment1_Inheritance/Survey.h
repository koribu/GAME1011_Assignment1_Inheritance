#pragma once
#ifndef __SURVEY__
#define __SURVEY__
#include <map>
#include <vector>
#include <iostream>

#include "Inheritance.h"


using namespace std;



class Survey
{
private:
	int size=0,totalAgeGamer,totalAgeNonGamer,totalHoursGame,totalHoursSteam, totalGamer = 0,totalNonGamer = 0;
	vector<string> devices;
	vector<string>streams;
	
	vector<Person *> participants;
	
	string GameDevice[3] = { "PC", "PlayStation", "XBOX" };
	string Stream[4] = { "Netflix","Hulu","HBO", "TV" };
public:
	Survey(int size);

	void createSurvey(int);

	void addParticipant(Person* person);
	
	int average(int total,int size)
	{
		return total / size;
	}
	void setSize(int size)
	{
		this->size = size;
	}

	void displaySurveyResult();

	string mostPrefered(vector<string>);
	
};

#endif

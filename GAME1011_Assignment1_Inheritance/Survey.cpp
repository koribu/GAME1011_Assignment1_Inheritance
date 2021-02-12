#include "Survey.h"
#include <iostream>

Survey::Survey(int size)
{
	createSurvey(size);
}

void Survey::createSurvey(int size)
{

	for (int i = 0; i < size; i++)
	{
		int p = rand() % 2;

		if (p == 0)
		{
			addParticipant(new NonGamingStudent(rand() % 9, (18 + rand() % 32), rand() % 3,
				rand() % 4, rand() % 8 + 1, Stream[rand() % 4], rand() % 24 + 1));
			totalGamer++;
			totalAgeGamer += participants[i]->getAge();
			totalHoursGame += participants[i]->getHours();
			devices.push_back(participants[i]->displayInfo());
		}
		else if (p == 1)
		{

			addParticipant(new GamingStudent(rand() % 9, (18 + rand() % 32), rand() % 3,
				rand() % 4, rand() % 8 + 1, GameDevice[rand() % 3], rand() % 24 + 1));
			totalNonGamer++;
			totalAgeNonGamer += participants[i]->getAge();
			totalHoursSteam += participants[i]->getHours();
			streams.push_back(participants[i]->displayInfo());
		}
	}
}

void Survey::addParticipant(Person* person)
{
	participants.push_back(person);
}



void Survey::displaySurveyResult()
{
	cout << totalNonGamer << "# of Non Gaming Students\n" << "   Average age: " << average(totalAgeNonGamer, totalNonGamer) <<
		"\n   Most preferred streaming service: " << mostPrefered(streams) << "\n   Average hours spent consuming non-gaming entertainment: " <<
		average(totalHoursSteam, totalNonGamer) << endl << endl;

	cout << totalGamer << "# of Gaming Students\n" << "   Average age: " << average(totalAgeGamer, totalGamer) <<
		"\n   Most preferred gaming device: " << mostPrefered(devices) << "\n   Average hours spent consuming gaming entertainment: " <<
		average(totalHoursGame, totalGamer) << endl << endl;
}

string Survey::mostPrefered(vector<string> list)
{
	map<string, int> m;
	for (int i = 0; i < list.size(); i++)
	{
		map<string, int>::iterator it = m.find(list[i]);
		if (it == m.end())
		{
			m.insert(pair<string, int>(list[i], 1));
		}
		else
			m[list[i]] += 1;
	}

	map<string, int>::iterator it = m.begin();
	for (map<string, int>::iterator it2 = m.begin(); it2 != m.end(); ++it2)
	{
		if (it2->second > it->second)
			it = it2;
	}
	return it->first;
}

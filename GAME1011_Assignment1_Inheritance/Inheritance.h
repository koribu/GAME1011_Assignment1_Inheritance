#pragma once
#ifndef __INHERITANCE__
#define __INHERITANCE__
#include <string>

using  namespace std;

enum Stream {Netflix,Hulu,HBO, TV};
enum GameDevice{PC, PlayStation, XBOX, ROCK};

class  Person
{

private:
	string name;
	int age;
public:
	Person()
	{
		setName("");
		setAge(0);
	}
	Person(string name, int age)
	{
		setName(name);
		setAge(age);
	}
	~Person()
	{
	}
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	int getAge()
	{
		return age;
	}
	
};

class Student : Person
{
private:
	string college;
	string program;
	int semester;
public:
	Student()
	{
		setCollege("");
		setProgram("");
		setSemester(0);
	}
	Student(string sName,int age, string college, string program, int semester) :Person(sName,age)
	{
		setCollege(college);
		setProgram(program);
		setSemester(semester);
	}
	~Student()
	{
	}
	void setCollege(string college)
	{
		this->college = college;
	}
	string getCollege()
	{
		return college;
	}
	void setProgram(string program)
	{
		this->program = program;
	}
	string getProgram()
	{
		return program;
	}
	void setSemester(int semester)
	{
		this->semester = semester;
	}
	int getSemester()
	{
		return semester;
	}
	
};

class NonGamingStudent : Student
{
private:
	Stream streaming;
	int hours;
public:
	NonGamingStudent()
	{
		setStream(TV);
		setHours(0);
	}
	NonGamingStudent(string sName, int age, string college, string program, int semester,Stream streaming,int hours)
					:Student(sName,age,college,program,semester)
	{
		setStream(streaming);
		setHours(hours);
	}
	~NonGamingStudent()
	{
	}
	void setStream(Stream streaming)
	{
		this->streaming = streaming;
	}
	Stream getStream()
	{
		return streaming;
	}
	void setHours(int hours)
	{
		this->hours = hours;
	}
	int getHours()
	{
		return hours;
	}
};

class GamingStudent : Student
{
private:
	GameDevice device;
	int hours;
public:
	GamingStudent()
	{
		setDevice(ROCK);
		setHours(0);
	}
	GamingStudent(string sName, int age, string college, string program, int semester, GameDevice device, int hours)
				:Student(sName, age, college, program, semester)
	{
		setDevice(device);
		setHours(hours);
	}
	~GamingStudent()
	{

	}
	void setDevice(GameDevice device)
	{
		this->device = device;
	}
	GameDevice getDevice()
	{
		return device;
	}
	void setHours(int hours)
	{
		this->hours = hours;
	}
	int getHours()
	{
		return hours;
	}
	
};

#endif

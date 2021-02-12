#pragma once
#ifndef __INHERITANCE__
#define __INHERITANCE__
#include <string>

using  namespace std;

class  Person
{

protected:
	string name;
	int age;

	string pNames[9] = { "John","Mike","Jenny","Mahmut","Chen","Maria","Angela","Morgan","Kenny" };
	
	Person(int name, int age)
	{
		setName(name);
		setAge(age);
	}
public:

	void setName(int name)
	{
		this->name = pNames[name];
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
	virtual string displayInfo() = 0;
	virtual int getHours() = 0;
	
};

class Student : public Person
{
protected:
	string college;
	string program;
	int semester;

	string programs[4] = { "Architecture","Medical","Computer Science","Art" };
	string colleges[4] = { "George Brown College","Greendale Community College","Gotham Villian College" };
	
	Student(int sName, int age, int college, int program, int semester) :Person(sName, age)
	{
		setCollege(college);
		setProgram(program);
		setSemester(semester);
	}
public:

	~Student()
	{
	}
	void setCollege(int college)
	{
		this->college = colleges[college];
	}
	string getCollege()
	{
		return college;
	}
	void setProgram(int program)
	{
		this->program = programs[program];
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

class NonGamingStudent : public Student
{
private:
	
	string streaming;
	int hours;
public:
	NonGamingStudent(int sName, int age, int college, int program, int semester,string streaming,int hours)
					:Student(sName,age,college,program,semester)
	{
		setStream(streaming);
		setHours(hours);
	}
	~NonGamingStudent()
	{
	}
	virtual void setStream(string streaming)
	{
		this->streaming = streaming;
	}
	string getStream()
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
	virtual string displayInfo()
	{
		return getStream();
	}
};

class GamingStudent : public Student
{
private:
	
	string device;
	int hours;
public:

	GamingStudent(int sName, int age, int college, int program, int semester, string device, int hours)
				:Student(sName, age, college, program, semester)
	{
		setDevice(device);
		setHours(hours);
		
	}
	~GamingStudent()
	{

	}
	void setDevice(string device)
	{
		this->device = device;
	}
	string getDevice()
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
	virtual string displayInfo()
	{
		return getDevice();
	}
};

#endif

#include"Employee.h"
#include "Address.h"
#include "Project.h"
Employee::Employee(char* name, const Address &other)
{
	int nlen=strlen(name);
	emp_name=new char[nlen];
	for(int i=0;i<nlen;i++)
	{
		emp_name[i]=name[i];
	}
	this->address = &other;
	for (int i = 0; i < 2; i++)
		this->projects[i] = nullptr;
}
Employee::Employee()
{
	emp_name=nullptr;
}
Employee::Employee(const Employee& a)
{
	this->address = a.address;
	
	int s = strlen(a.emp_name) + 1;
	this->emp_name = new char[s];
	strcpy_s(this->emp_name, s, a.emp_name);
	for (int i = 0; i < 3; i++)
		this->projects[i] = a.projects[i];
}
const Employee& Employee::operator = (const Employee& a)
{
	if (this != &a)
	{
	this->address = a.address;

	int size = strlen(a.emp_name) ;
	if (this->emp_name != nullptr)
		delete[]emp_name;
	this->emp_name = new char[size+1];
	strcpy_s(this->emp_name, size+1, a.emp_name);
	for (int i = 0; i < 3; i++)
		this->projects[i] = a.projects[i];
	}
	return *this;
}

void Employee::addProject(Project* ptr)
{
	for (int i = 0; i < 2; i++)
		if (this->projects[i] == nullptr)
		{
			this->projects[i] = ptr;
			break;}	
}

void Employee::removeProject(Project * ptr)
{
	for (int i = 0; i < 2; i++)
	{
		if (projects[i] == ptr)
			projects[i] = nullptr;
	}
}

Employee::~Employee()
{
	delete this->address;
	if (this->emp_name != nullptr)
		delete[]this->emp_name;
}
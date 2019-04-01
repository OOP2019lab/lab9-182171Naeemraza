
#include"Project.h"
Project::Project()
{
	duration=0;
	budget=0;
	name=nullptr;
}

Project::Project(char* Name, int Budget, int Duration)
{
	int nlen=strlen(Name);
	char*name=new char[nlen+1];
	for(int i=0;i<nlen;i++)
	{
		name[i]=Name[i];
	}
	name[nlen]='\0';
	budget=Budget;
	duration=Duration;
}
Project::Project(const Project& a)
{
	this->budget=a.budget;
	this->duration=a.duration;
	int nlen=strlen(a.name);
	if(name==nullptr)
	{
		this->name=new char[nlen];
		for(int i=0;i<nlen;i++)
		{
			name[i]=a.name[i];
		}
	}
	else
		for(int i=0;i<nlen;i++)
		{
			name[i]=a.name[i];
		}

}
ostream& operator<<(ostream& osObject, const Project&a)
{
	osObject<<"Name:"<<a.name;
	osObject<<"Budget"<<a.budget;
	osObject<<"Duratioin:"<<a.duration;
	return osObject;

}
const Project &  Project:: operator=(const Project& other)
{
	int s=strlen(other.name)+1;
	if (this->name != nullptr)
			delete[]this->name;
	this->name=new char[s];
	for(int i=0;i<s;i++)
	   this->name[i]=name[i];
	duration=other.duration;
	budget=other.budget;
	return *this;
}
void Project::setBudget(int a)
{
	budget=a;
}
Project::~Project()
{
	if(name!=nullptr)
		delete[]name;
}
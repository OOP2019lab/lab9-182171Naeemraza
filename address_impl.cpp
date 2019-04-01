
#include "Address.h"
Address::Address()
{
	char* house_Number=nullptr;
	char* street_Name =nullptr;
	char * city=nullptr;
	char* country=nullptr;
}
Address::Address(char* houseNumber, char* StreetName, char * City,char*County)
{
	int hlen=strlen(houseNumber);
	char* house_Number=new char[hlen+1];
	for(int i=0;i<hlen+1;i++)
	{
		house_Number[i]=houseNumber[i];
	}
	house_Number[hlen]='\0';
	

	int slen=strlen(StreetName);
	char* street_Name =new char[slen+1];
	
	for(int i=0;i<slen+1;i++)
	{
		street_Name[i]=StreetName[i];
	}
	street_Name[slen]='\0';
	int clen=strlen(City);
	char * city=new char[clen+1];
	
	for(int i=0;i<clen+1;i++)
	{
		city[i]=City[i];
	}
	city[clen]='\0';
	int Clen=strlen(County);
	char* country=new char[Clen+1];
	
	for(int i=0;i<Clen+1;i++)
	{
		country[i]=County[i];
	}
	country[Clen]='\0';
}
Address & Address:: operator=(const Address& other)
{
	if(this!=&other)
	{
	int hlen=strlen(other.house_Number);
	char* house_Number=new char[hlen+1];
	for(int i=0;i<hlen;i++)
	{
		house_Number[i]=other.house_Number[i];
	}
	house_Number[hlen]='\0';
	int slen=strlen(other.street_Name);
	char* street_Name =new char[slen+1];
	
	for(int i=0;i<slen+1;i++)
	{
		street_Name[i]=other.street_Name[i];
	}
	street_Name[slen]='\0';
	int clen=strlen(other.city);
	char * city=new char[clen+1];
	
	for(int i=0;i<clen+1;i++)
	{
		city[i]=other.city[i];
	}
	city[clen]='\0';
	int Clen=strlen(other.country);
	char* country=new char[Clen+1];
	
	for(int i=0;i<Clen+1;i++)
	{
		country[i]=other.country[i];
	}
	country[Clen]='\0';
	return *this;
	}
}
Address::~Address()
{
	if(house_Number!=nullptr)
		delete[]house_Number;
	if(street_Name!=nullptr)
		delete[]street_Name;
	if(city!=nullptr)
		delete[]city;
	if(country!=nullptr)
		delete[]country;
}
Address::Address(const Address& a)
{
	if(house_Number==nullptr)
	{
		char* house_Number=new char;
		this->house_Number=a.house_Number;
	}
	else
		this->house_Number=a.house_Number;
	if(street_Name==nullptr)
	{
		char* street_Name=new char;
		this->street_Name=a.street_Name;
	}
	else
		this->street_Name=a.street_Name;
	if(city==nullptr)
	{
		char* city=new char;
		this->city=a.city;
	}
	else
		this->city=a.city;
	if(country==nullptr)
	{
		char* country=new char;
		this->country=a.country;
	}
	else
		this->country=a.country;
}

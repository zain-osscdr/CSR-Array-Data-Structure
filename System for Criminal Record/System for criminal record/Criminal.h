#ifndef CRIMINAL_H
#define CRIMINAL_H
#include"Date.h"
#include<cstring>
#include<iostream>
using namespace std;
class Criminal
{
private:
	string name;
	int age;
	string race;
	char gender;
	string cnic;
	string state;
	string city;
	int postalCode;
	string address;
	int cellNumber;

	string crimeType;
	string offence;
	string complainerName;
	string investingOfficer;
	int maxSize;
	int currSize;
	Date dob;              
	Date crimeDate;        
	Date punishmentDate; 

public:
	Criminal(string name, int age, string race, char gender, string cnic, string state, string city, int postalCode, string address, int cellNumber, string crimeType, string offence, string complainerName, string investingOfficer, Date dob, Date crimeDate, Date punishmentDate);
	Criminal();
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void setRace(string race);
	string getRace();
	void setGender(char gender);
	char getGender();
	void setCnic(string cnic);
	string getCnic();
	void setState(string state);
	string getState();
	void setCity(string city);
	string getCity();
	void setPostalCode(int postalCode);
	int getpostalCode();
	void setAddress(string address);
	string getAddress();
	void setCellNumber(int cellNumber);
	int getCellNumber();
	void setcrimeType(string crimeType);
	string getcrimeType();
	void setoffenc(string offence);
	string getoffence();
	void setcomplainerName(string complainerName);
	string getcomplainerName();
	void setInvestingOfficer(string investingOfficer);
	string getinvestingOfficer();
	void insertCriminal();
};

#endif 

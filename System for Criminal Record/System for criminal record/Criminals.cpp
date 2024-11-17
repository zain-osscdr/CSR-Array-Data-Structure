#include "Criminals.h"
#include "Date.h"
#include<cstring>
#include<string>
#include<iostream>
using namespace std;

Criminals::Criminals(int maxSize) {
	currSize = 0;
	this->maxSize = maxSize;
	arr = new Criminal[maxSize];
}

Criminals::~Criminals() {
	delete[] arr;
}

void Criminals::insertCriminal() {
	if(currSize>=maxSize){
		cout << "Can't Add Criminals Right Now" << endl;
		return;
	}
	else {
		string name, race, cnic, state, city, address, day, month, crimeType, offence, complainerName, investingOfficer;
		int age, postalCode, cellNumber, year;
		char gender;
		
		cout << "Enter Name Criminal " << endl;
		getline(cin, name);
		

		cout << "Enter Age Criminal " << endl;
		cin >> age;
		cin.ignore();

		cout << "Enter Birth Date 00-00-00" << endl;
		getline(cin, day, '-');  
		getline(cin, month, '-'); 
		cin >> year;               
		cin.ignore();
		Date dob(day, month, year);


		cout << "Enter Race of Criminal "<< endl;
		getline(cin, race);

		cout << "Enter Gender of Criminal"<< endl;
		cin >> gender;
		cin.ignore();

		cout << "Enter Cnic of Criminal" << endl;
		getline(cin, cnic);

		cout << "Enter State of Criminal " << endl;
		getline(cin, state);

		cout << "Enter City of Criminal " << endl;
		getline(cin, city);

		cout << "Enter Postal Code " << endl;
		cin >> postalCode;
		cin.ignore();

		cout << "Enter Address of Criminal " << endl;
		getline(cin, address);

		cout << "Enter Cell no Criminal " << endl;
		cin >> cellNumber;
		cin.ignore();

		cout << "Enter Crime Type" << endl;
		getline(cin, crimeType);

		cout << "Enter Offence Of Criminal" << endl;
		getline(cin, offence);

		cout << "Enter Date of Crime " << endl;
		getline(cin, day, '-');
		getline(cin, month, '-');
		cin >> year;
		cin.ignore();
		Date crimeDate(day, month, year);

		cout << "Enter Date of Punishment " << endl;
		getline(cin, day, '-');  
		getline(cin, month, '-'); 
		cin >> year;               
		cin.ignore();
		Date punishmentDate(day, month, year);



		cout << "Enter Name of Complainer " << endl;
		getline(cin, complainerName);

		cout << "Enter Name of Investigating Officer " << endl;
		getline(cin, investingOfficer);

		arr[currSize]=Criminal(name, age, race, gender, cnic, state, city, postalCode, address, cellNumber, crimeType, offence, complainerName, investingOfficer, dob, crimeDate, punishmentDate);
		
		currSize++;
		cout << "Successfully Added" << endl;
	}
}
void Criminals::sortingName() {

	for (int i = 0; i < currSize-1; i++) {
		bool flag = false;
		for (int j = 0; j < currSize - i - 1; j++) {
			if (arr[j].getName() > arr[j + 1].getName()) {
				swap(arr[j], arr[j + 1]);
				flag = true;
			}
		}
		if (!flag) {
			
			break;
		}
	}
	
	
	cout << "Criminals are Sorted in Ascending Order" << endl;
	for (int i = 0; i < currSize; i++) {
		cout << arr[i].getName() << endl;
	}
}


void Criminals::binarySearch(string name) {

	int start = 0;
	int end = currSize-1;
	bool flag = false;
	while (start <= end) {
		int mid = (start + end) / 2;

		if (arr[mid].getName() == name) {
			cout << "Criminal found : Details Are :" << endl;
			cout << arr[mid].getName() << endl;
			cout << arr[mid].getAge() << endl;
			cout << arr[mid].getAddress() << endl;
			cout << arr[mid].getState() << endl;
			cout << arr[mid].getCity() << endl;
			cout << arr[mid].getpostalCode() << endl;
			cout << arr[mid].getCellNumber() << endl;
			cout << arr[mid].getoffence() << endl;
			cout << arr[mid].getcrimeType() << endl;
			cout << arr[mid].getCnic() << endl;
			cout << arr[mid].getRace() << endl;
			cout << arr[mid].getGender() << endl;
			cout << arr[mid].getcomplainerName() << endl;
			cout << arr[mid].getinvestingOfficer() << endl;
		
			flag = true;
			return;
		}
		else if (arr[mid].getName()> name) {
			end = mid - 1;
		}
		else if (arr[mid].getName() < name) {
			start = mid + 1;
		}
	}
	
	if (!flag) {
		cout << "Criminal Not Found" << endl;
	}
}

void Criminals::binarySearchCrimeType(string crimeType) {
	int start = 0;
	int end = currSize - 1;
	bool flag = false;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid].getcrimeType() == crimeType) {
			cout << "Criminal found : Details Are :" << endl;
			cout << arr[mid].getName() << endl;
			cout << arr[mid].getAge() << endl;
			cout << arr[mid].getAddress() << endl;
			cout << arr[mid].getState() << endl;
			cout << arr[mid].getCity() << endl;
			cout << arr[mid].getpostalCode() << endl;
			cout << arr[mid].getCellNumber() << endl;
			cout << arr[mid].getoffence() << endl;
			cout << arr[mid].getcrimeType() << endl;
			cout << arr[mid].getCnic() << endl;
			cout << arr[mid].getRace() << endl;
			cout << arr[mid].getGender() << endl;
			cout << arr[mid].getcomplainerName() << endl;
			cout << arr[mid].getinvestingOfficer() << endl;

			flag = true;
			return;
		}
		else if (arr[mid].getcrimeType() > crimeType) {
			end = mid - 1;
		}
		else if (arr[mid].getcrimeType() < crimeType) {
			start = mid + 1;
		}
	}
	if (!flag) {
		cout << "Criminal Not Found" << endl;
	}
}


void Criminals::updateCriminal(string name) {
	int start = 0;
	int end = currSize - 1;
	bool flag = false;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid].getName() == name) {
			string  race, cnic, state, city, address, day, month, crimeType, offence, complainerName, investingOfficer;
			int age, postalCode, cellNumber, year;
			char gender;
		


			cout << "Enter Criminal's Age" << endl;
			cin >> age;
			cin.ignore();

			cout << "Enter Birth Date In Format 00-00-00" << endl;
			getline(cin, day, '-');
			getline(cin, month, '-');
			cin >> year;
			cin.ignore();
			Date dob(day, month, year);


			cout << "Enter Race of Criminal " << endl;
			getline(cin, race);

			cout << "Enter Gender of Criminal " << endl;
			cin >> gender;
			cin.ignore();

			cout << "Enter Cnic of Criminal " << endl;
			getline(cin, cnic);

			cout << "Enter State" << endl;
			getline(cin, state);

			cout << "Enter City" << endl;
			getline(cin, city);

			cout << "Enter Postal Code" << endl;
			cin >> postalCode;
			cin.ignore();

			cout << "Enter Address of Criminal" << endl;
			getline(cin, address);

			cout << "Enter Cell no of Criminal " << endl;
			cin >> cellNumber;
			cin.ignore();

			cout << "Enter Crime Type  " << endl;
			getline(cin, crimeType);

			cout << "Enter Offence Of The Criminal" << endl;
			getline(cin, offence);

			cout << "Enter Crime Date" << endl;
			getline(cin, day, '-');
			getline(cin, month, '-');
			cin >> year;
			cin.ignore();
			Date crimeDate(day, month, year);

			cout << "Enter Punishment Date" << endl;
			getline(cin, day, '-');
			getline(cin, month, '-');
			cin >> year;
			cin.ignore();
			Date punishmentDate(day, month, year);



			cout << "Enter Complainer Name" << endl;
			getline(cin, complainerName);

			cout << "Enter Name of Investigating Officer" << endl;
			getline(cin, investingOfficer);

			arr[mid] = Criminal(name, age, race, gender, cnic, state, city, postalCode, address, cellNumber, crimeType, offence, complainerName, investingOfficer, dob, crimeDate, punishmentDate);

			cout << "Data Updated Successfully" << endl;
		
			return;
		}
		else if (arr[mid].getName() > name) {
			end = mid - 1;
		}
		else if (arr[mid].getName() < name) {
			start = mid + 1;
		}
	}
	if (!flag) {
		cout << "No Record Found" << endl;
	}
}
void Criminals::theftSearch(string theft) {
	bool flag = false;
	for (int i = 0; i < currSize; i++) {
		
		if (arr[i].getoffence() == theft) {
			cout << "Name : " << i << " " << arr[i].getName() << endl;
			flag = true;
		}
	}
	if (!flag){
		cout << "No Record of Theft " << endl;
}
}
void Criminals::murderSearch(string murder) {
	bool flag = false;
	for (int i = 0; i < currSize - 1; i++) {
		if (arr[i].getoffence() == murder) {
			cout << "Name : " << i << " " << arr[i].getName() << endl;
			flag = true;
		}
	}
	if (!flag) {
		cout << "No Record of Theft " << endl;
	}

}
void Criminals::removeCrminal(string name) {
	if (currSize == 0) {
		cout << "No Criminals in the List" << endl;
		return;
	}
	int i = 0;
	while (i < currSize) {
		if (arr[i].getName() == name) {
			for (int j = i; j < currSize - 1; j++) {
				arr[j] = arr[j + 1];

			}
			currSize--;
		}
		else {
			i++;
		}
	}
	cout << "Criminal removed" << endl;
}

void Criminals::mostOccuredCrime() {
	if (currSize == 0) {
		cout << "List is Empty" << endl;
	}
	
	string mco;
	int max = 0;
	for (int i = 0; i < currSize; i++) {
		string cOffence = arr[i].getoffence();
		int count = 0;
		for (int j = 0; j < currSize; j++) {
			if (arr[j].getoffence() == cOffence) {
				count++;
			}
		}
		if (count > max) {
			max = count;
			mco = cOffence;
		}
	}
	if (max > 0) {
		cout << "The crime with most Ratio is  : " <<mco<<"  with max count of  "<<max<<" Occurences"<<endl;
	}
	else {
		cout << "The crime offence ratio is equal " << endl;
	}
}

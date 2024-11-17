
#include <iostream>
#include"Criminals.h"
#include"Date.h"
using namespace std;
int main()
{
	cout << "Enter The Number of Criminals" << endl;
	int max;
	cin >> max;
	cin.ignore();
	
	Criminals CrData(maxSize);
	CrData.insertCriminal();
	CrData.insertCriminal();
	CrData.insertCriminal();
	CrData.insertCriminal(); 

	CrData.sortingName();
	cout << "Search Name Of Crime " << endl;
	string n;
	cin.ignore();
	getline(cin, n);
	
	CrData.binarySearchCrimeType(n);
	 cout << "Update Name Of Criminal " << endl;
	 string a;
	 cin.ignore();
	 getline(cin, a);
	 
	 CrData.updateCriminal(a);
	 string b="Theft";
	 
	 CrData.theftSearch(b);
	 string c = "Murder";
     
	 
	CrData.murderSearch(c);
	cout << "Remove Name Of Criminal " << endl;
	string p;
	cin.ignore();
	getline(cin, p);
	
	 CrData.removeCrminal(p);
	 CrData.mostOccuredCrime();
	 
	 cout << "Search Name Of Criminal " << endl;
	 string x;
	 cin.ignore();
	 getline(cin, p);
	 
	 CrData.binarySearch(x);
	
}


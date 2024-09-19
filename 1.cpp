#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
	ofstream fapp;
	string fwname;
	int rno;
	string name;
	float per;
	string line;
	
	cout<<"Enter the File Name To Write : ";
	cin>>fwname;
	
	fapp.open(fwname,ios::app);
	
	if(! fapp.is_open())
	{
		cout<<"Unable to Open File : "<<fwname;
		exit(0);	
	}
		
			cout<<"Enter Roll no of Student    : ";
			cin>>rno;
			
			cout<<"Enter NAme of Student       : ";
			cin>>name;
		
			cout<<"Enter Percentage of Student : ";
			cin>>per;
		
			fapp<<"\nRollNo"<<"\t"<<"Name"<<"\t"<<"Percentage"<<endl;
			fapp<<rno<<"\t"<<name<<"\t"<<per<<endl;
	
	
	ifstream fin;
	
	fin.open(fwname,ios::in);
	
	cout<<"\nContent Of File: "<<endl;
	
	if(! fin.is_open())
	{
		cout<<"Unable to Open File : "<<fwname;
		exit(0);	
	}
	
	while(getline(fin,line))
	{
		cout<<line<<endl;
	}
	
	fapp.close();
	fin.close();
	
}
#include<iostream>

using namespace std;

class Student
{
	private:
		
		int Roll_no;
		string Student_name;
		int class_s;
		
		static int Student_cnt;
		
	public:
		
		Student()
		{
			Roll_no = 0;
			Student_name = "unknown";
			class_s =0;
		}
		
		void accept()
		{
			Student_cnt++;
			
			cout<<"Enter Roll Number : ";
			cin>>Roll_no;
			
			cout<<"Enter The Name : ";
			cin>>Student_name;
			
			cout<<"Enter the Class : ";
			cin>>class_s;
		}
		
		void display()
		{
			cout<<Roll_no<<"\t"<<Student_name<<"\t"<<class_s <<" th"<<endl;			
		}
		
		static void show()
		{
			cout<<"\nTotal Student : "<<Student_cnt<<endl;
		}
		
		~Student()
		{
			
		}
};

int Student::Student_cnt=0;


int main()
{
	int n;
	
	cout<<"How many information of student : ";
	cin>>n;
	
	Student ob[n];
	
	for(int i =0;i<n;i++)
	{
		ob[i].accept();
	}
	
	cout<<"\nRoll No"<<"\t"<<"Name"<<"\t"<<"Class"<<endl;
	cout<<"-----------------------------------"<<endl;
	
	for(int i =0;i<n;i++)
	{
		ob[i].display();
	}
	
	Student::show();

	return 0;
}
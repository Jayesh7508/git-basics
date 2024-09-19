#include<iostream>

using namespace std;

class Rectangle
{
	private:
	 
	float length;
	float breath;
	
	public:
		
		Rectangle(float a=0.0,float b=0.0)
		{
			length = a;
			breath = b;
		}
		
		float Area()
		{
			return length * breath;
		}
		
		~Rectangle()
		{
			
		}
};

int main()
{
	Rectangle R1(4,5);
	
	Rectangle R2(5,8);
	
	float a = R1.Area();
	
	cout<<"Area of R1 : "<<a<<endl;
	
	float b = R2.Area();
	
	cout<<"Area of R2 : "<<b<<endl;
	
	return 0;
		
}
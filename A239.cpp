#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	if(a>b)
		cout<<"The maximum number between the two given numbers is "<<a;
	else
		cout<<"The maximum number between the two given numbers is "<<b;	
	return 0;
}

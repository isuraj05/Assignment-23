#include<iostream>
using namespace std;
int main()
{
	int a[10],i,sum=0;
	cout<<"Enter ten numbers: ";
	for(i=0;i<10;i++)
		cin>>a[i];
	
	for(i=0;i<10;i++)
		sum+=a[i];
	cout<<"Sum of the array elements is "<<sum;		
	return 0;
}

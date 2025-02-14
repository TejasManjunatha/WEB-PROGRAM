#include<iostream>
using namespace std;
int main()
{
	int distance;
	cout
	<<"ask for the distance between two cities in(kms):";
	cin>>distance;
	cout<<"the distance between cities in meters:"<<(distance*1000)<<endl;
	cout<<"the distance between cities in feet:"<<(distance*3280)<<endl;
	cout<<"the distance between cities in inches:"<<(distance*39370)<<endl;
	cout<<"the distance between cities in centimeters:"<<(distance*100000)<<endl;
	return 0;
}


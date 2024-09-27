//Q.2)Number is pallindrome or not
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s1;
	cout<<"Enter the number:"<<endl;
	cin>>s1;
	string reversed(s1.rbegin(),s1.rend());
	if(s1==reversed)
	{
		cout<<"Number is pallindrome."<<endl;
	} 
	else 
	{
		cout<<"Number is not Pllindrome."<<endl;
	}
	return 0;
}

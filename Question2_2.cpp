//Q.2)Number Reverse
#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
  string s;
  cout<<"Enter the number:"<<endl;
  cin>>s;
  string reversed(s.rbegin(),s.rend());
  cout<<reversed;
	return 0;
}

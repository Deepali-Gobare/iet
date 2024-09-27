/*
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"before swapping"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"After swapping"<<a<<" "<<b<<endl;
}
void swap(int &a, int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int r;
//	int sum=0;
//	cout<<"Enter";
//	cin>>n;
//	
//	while(n>0)
//	{
//		r=n%10;
//		sum=sum*10+r;
//		n=n/10;
//	}
//	cout<<"new"<<sum;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    // Reverse the string
//    string reversed_n = string(n.rbegin(), n.rend());
//
//    // Output the reversed string
//    cout << "Reversed number: " << reversed_n << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() 
//{
//	string n;
//	cout<<"Enter ";
//	cin>>n;
//	
//	string a=string(n.rbegin(),n.rend());
//	cout<<"Reverse    "<< a;
//}

//#include<bits/stdc++.h>
//
//using namespace std;
//void solve(string str, int n) {
//
//  for (int i = 0; i < n; i++) {
//    int ascii = (int) str[i]; // calculating ascii value
//
//    if (ascii >= 65 && ascii <= 90) // if uppercase
//      str[i] = ((char)(ascii + 32));
//
//    else if (ascii >= 97 && ascii <= 122) // if lowercase
//      str[i] = ((char)(ascii - 32));
//
//  }
//
//  cout << "Resultant string: " << "\n";
//  cout << str << "\n";
//}
//int main() {
//  // Input string
//  string str = "take u forward IS Awesome";
//  int n = str.length();
//
//  solve(str, n);
//  return 0;
//}
//


#include<bits/stdc++.h>
using namespace std;

void aa(string str,int n)
{
	for(int i=0;i<n;i++)
	{
		int asci= (int) str[i];
		
		if(asci>=65&&asci<=90)
		{
			 str[i]=((char)(asci+32));
		}
		else if (asci >=97 && asci <=122) 
		{
			 str[i]=((char)(asci-32));
		}
	}
	cout<<"String is "<<str;
}
int main()
{
	string str="AYush Bhandsasgsarpighljnm  RAEfgSRHG";

	
//	cout<<"Enter string";
//	cin>>str;
	int n=str.length();
	aa(str, n);
}























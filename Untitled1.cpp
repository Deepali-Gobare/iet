//#include <bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    
//    switch (n) {
//        case 1: if(n=1)
//                cout<<"one";
//                break;
//        case 2:if(n=2)
//                cout<<"two";
//                break;
//        case 3:if(n=3)
//                cout<<"three";
//                break;
//      case 4:if(n=4)
//                cout<<"four";
//                break;
//      case 5:if(n=5)
//                cout<<"five";
//                break;
//      case 6:if(n=6)
//                cout<<"six";
//                break;
//      case 7:if(n=7)
//                cout<<"seven";
//                break;
//      case 8:if(n=8)
//                cout<<"eight";
//                break;
//      case 9:if(n=9)
//                cout<<"nine";
//                break;
//      default:if(n>9)
//                cout<<"greater than nine";
//                break;
//                
//                
//                
//                            
//                
//    }
//}

#include<iostream>
using namespace std;
int mian()
{
	int n;
	cin>>n;
	int count=0;
	int r;
	while(n>0)
	{
	   r=n%10;
	   count++;
	   n=n/10;
	}
	cout<<count;
}

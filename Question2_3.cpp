//Q.2)d Ascending order
#include<iostream>
using namespace std;
int main()
{   int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
	int arr[n];
	int min = 0; 
	for(int i = 0; i<n;i++)
	{
		arr[i] = i+1;
	}
	for(int i = 0; i<n ;i++)
	{
		if(arr[min]>arr[i])
		{
			arr[min] = arr[i];
		} 
		cout<<arr[i]<<" ";
	} 
	
	return 0;
}

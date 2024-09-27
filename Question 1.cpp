//Q.1) 
#include<iostream>
#include<cstring>
using namespace std;
class String1
{
	char*ptr;
	int len;
	public:
		String1()
		{
			len = 0;
		}
		String1(char*ch,int n)
		{
			len = n;
			ptr = new char[len+1];
			strcpy(ptr,ch);
		}
		String1& operator=(String1&s)
		{
			len = s.len;
			delete[] ptr;
			ptr = new char[len+1];
			strcpy(this->ptr,s.ptr);
		} 
	void show()
	{
		cout<<"The string is:"<<ptr<<endl;
	} 
	~String1()
	{
		cout<<"Destructor is called!"<<endl;
	}
};
int main()
{
	String1 s1("Nikhil",7);
	s1.show();
	String1 s2;
	s2=s1;
	s2.show();
	return 0;
}

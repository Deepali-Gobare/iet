#include<iostream>
using namespace std;

class A{
	public:
		int a,b,c,d;
};
class B:  public A{
	public:
	int x;
};
class C:virtual public A{
	public:
	int y;
};
class D:public B,public C{
	
};
int main(){
	D d1;
	C c1;
	A a1;
	B b1;
	cout<<"size of class a"<<sizeof(a1)<<endl;
		cout<<"size of class b"<<sizeof(b1)<<endl;
	cout<<"size of class c"<<sizeof(c1)<<endl;
	cout<<"size of class d"<<sizeof(d1)<<endl;

}


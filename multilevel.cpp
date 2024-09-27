#include<iostream>
#include<string.h>
using namespace std;

class car{
	protected:
	string brandname;

	
	public:
	car(){
		cout<<"Defult constructor....!"<<endl;
	}	
	
     car(string brandname){
		this->brandname = brandname;

		cout<<"Para constuctor for car.. !"<<endl;
	}
	
	  void show(){
		cout<<brandname<<endl;
	}
	
		~car(){
		cout<<"Defult distructer for car....!"<<endl;
	}
			
};

class bike{
	protected:
	string type;
	
	public:
	bike(){
		cout<<"Defult constructor....!"<<endl;
	}	
	
     bike(string type){
		this->type = type ;
		cout<<"Para constuctor for bike..!"<<endl;
	}
	
	  void show(){
		cout<<type<<endl;
	}
	
	~bike(){
		cout<<"Defult distructer for bike....!"<<endl;
	}
			
};


class vechical : public car, public bike{
	public:
     vechical(string b,string c):bike(b),car(c){
     cout<<"Its the para cons"<<endl;	
	 }
	 
	
};

int main(){
	vechical v("abc","uyt");
	v.bike::show();
	v.car::show();
}
	

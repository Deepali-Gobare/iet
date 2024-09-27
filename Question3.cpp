 //Q.3) Inheritance program
 #include<iostream>
 using namespace std;
 class Employee
 {
 	int salary;
 	int code;
 	public:
 	Employee()
 	{
 		code = 0;
	 } 
	 Employee(int c)
	 {
	 	code = c;
	 }
	 virtual void display()
	 {
	 	cout<<"The code is:"<<code<<endl;
	 }
	 virtual int computesalary() = 0;
	 
 }; 
 class Wageemplopyee : public Employee
 {
 	int hrs,rate;
 	public:
 	Wageemployee()
 	{
 		hrs = rate = 0;
	 }
	 Wageemployee(int c,int h, int r) : Employee(c)
	 {
	 	hrs = h;
	 	rate = r;
	 } 
	 int computesalary()
	 {
	 	return hrs*rate;
	 } 
	void display() 
	{   
	    //Employee::display();
		cout<<"The hrs and rate of Wageemployee is:"<<" "<<hrs<<" "<<rate<<endl;
	}
 	
 }; 
 class Salesmanager : public Wageemployee
 {
 	int comm, sales;
 	public:
 		Salesmanager()
 		{
 			comm = sales = 0;
		 } 
		 Salaesmanager(int c,int h, int r, int c, int s) :Wageemployee(c,h,r)
		 {
		 	comm =c;
		 	sales = s;
		 }
		 int computesalary(int h, int r, int c, int s)
		 {
		 	return Wageemployee::computesalary + ((s*c));
		 } 
	void display()
	{
		//Wageemployee::display();
		cout<<"The comm and sales are"<<" "<<c <<" "<<"and"<<" "<<s<<endl;
		computesalary();
	} 
	
 };
 int main()
 { 
 Employee*ptr;
 ptr = new salesmanager(101,10,500,1,12345);
 cout<<"The salary of salesmanager is:"<<ptr->display()<<endl;
 }

#include<iostream>
using namespace std;
class Employee
{
			 
	public:		 
	
	virtual void Salary()
	{
		cout<<"Salary of employee"<<endl;
	}
	
	virtual void Increment()
	{
		cout<<"Increment percentage of employee"<<endl;
	}
	
	void Holidays()
	{
		cout<<"Holidays for  employee : 20 days"<<endl;
	}
	
	void Creditdate()
	{
		cout<<"Salary Creditdate = 1 week"<<endl;
	}
	
	virtual void EmpID()
	{
		cout<<"EmpID for employees "<<endl;
	}
	
};
class CTO : public Employee
{
	public : 
	          
           
void Salary()
{
cout<<"Salary of CTO = 1,50,000"<<endl;
}
void Increment()
{
	cout<<"Increment % = 80%"<<endl;
}
void EmpID()
{
	cout<<"EmpID = 11101"<<endl;
}

};
class Manager: public Employee
{
	public : 
		
void Salary()
{
    cout<<"Salary of Manager = 1,30,000"<<endl;
}
void Increment()
{
	cout<<"Increment % = 60%"<<endl;
}
void EmpID()
{
	cout<<"EmpID = 11102"<<endl;
}


};

class Developer : public Employee
{
	public:
	
void Salary()
{
cout<<"Salary of Developer = 70,000"<<endl;
}
void Increment()
{
cout<<"Increment % = 40%"<<endl;
}
void EmpID()
{
cout<<"EmpID = 11103"<<endl;
}

}; 	
  

  
int main()
{
	Employee obj;
	Employee*p = new CTO(); //Dynamic Memory allocation
	Employee*emp = new CTO(); //Upcasting
	emp -> Salary();
	emp -> Increment();
	emp -> EmpID();
	
	Employee*p1 = new Manager(); //Dynamic Memory allocation
	Employee*emp1 = new Manager(); //Upcasting
	emp1 -> Salary();
	emp1 -> Increment();
	emp1 -> EmpID();
	
	Employee*p2 = new Developer(); //Dynamic Memory allocation
	Employee*emp2 = new Developer(); //Upcasting
	emp2 -> Salary();
	emp2 -> Increment();
	emp2 -> EmpID();
	
	obj.Holidays();
	obj.Creditdate();  
	
	return 0;
}

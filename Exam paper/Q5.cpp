#include<iostream>
using namespace std;

class Employee
{
	int salary;
	public:
		void set()
		{
			cout << "Enter Employee Salary : ";
			cin >> salary;
		}
		void get()
		{
			cout << "===========================================" << endl;
			cout << "Total Employee Salary : " << salary << endl;
		}
		Employee operator+(Employee m2)
		{
			Employee box;
			box.salary=this->salary+m2.salary;
			return box;
		}
};

int main()
{
	Employee m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1+m2;
	m3.get();
	return 0;
}

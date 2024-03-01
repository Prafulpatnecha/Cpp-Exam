#include<iostream>
using namespace std;

class Employee
{
	int salary;
	string name,designation;
	public :
		void set()
		{
			cout << "Enter Name : ";
			getline(cin,name);
			cout << "Enter Salary : ";
			cin >> salary;
			cin.ignore();
			cout << "Enter Designation : ";
			getline(cin,designation);
		}
		void get()
		{
			cout << endl << "=================================================" << endl;
			cout << "Name : " << name << endl;
			cout << "Salary : " << salary << endl;
			cout << "Designation : " << designation << endl;
		}
};

int main()
{
	Employee e1;
	e1.set();
	e1.get();
	return 0;
}

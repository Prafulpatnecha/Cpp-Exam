#include<iostream>
using namespace std;

class Rectangle
{
	int length,width;
	public :
		void set()
		{
			cout << "Enter Rectangle length : ";
			cin >> length;
			cout << "Enter Rectangle Width : ";
			cin >> width;
		}
		void calculate()
		{
			length*=width;
		}
		void get()
		{
			cout << "Area Of Rectangle : " << length << endl;
		}
};

int main()
{
	Rectangle r1;
	r1.set();
	r1.calculate();
	r1.get();
	return 0;
}

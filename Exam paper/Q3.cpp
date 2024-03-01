#include<iostream>
using namespace std;

class Shape
{
	protected:
	string color;
	float area;
	public:
		virtual void calculation()=0;
	void setting()
	{
		cout << "Enter Color : ";
		cin >> color;
	}
	void getting()
	{
		cout << "Your Color : " << color << endl;
		cout << "Area : " << area << endl;
	}
};
class Circle:public Shape
{
	const float pi=3.14;
	public :
	void calculation()
	{
		float r;
		cout << "Enter Circle Redius : ";
		cin >> r; 
		area=pi*r*r;
	}
};
class Rectangle:public Shape
{
	public :
	void calculation()
	{
		float l,w;
		cout << "Enter Rectangle L : ";
		cin >> l;
		cout << "Enter Rectangle W : ";
		cin >> w;
		area=l*w;
	}
};

int main()
{
	Circle c1;
	Rectangle r1;
	c1.calculation();
	c1.setting();
	r1.calculation();
	r1.setting();
	cout << "Area Of Circle" <<endl;
	c1.getting();
	cout << "Area Of Rectangle" <<endl;
	r1.getting();
	return 0;
}

#include<iostream>
using namespace std;

class Shape
{
	protected:
	string color;
	float area;
	public:
		virtual void display()
		{
			cout << "Virtual Use!!";
		}
};
class Circle:public Shape
{
	const float pi=3.14;
	public :
	void display()
	{
		float r;
		cout << "Enter Circle Redius : ";
		cin >> r; 
		area=pi*r*r;
		cout << "Area Circle : " << area << endl;
	}
};
class Rectangle:public Shape
{
	public :
	void display()
	{
		float l,w;
		cout << "Enter Rectangle L : ";
		cin >> l;
		cout << "Enter Rectangle W : ";
		cin >> w;
		area=l*w;
		cout << "Area Rectangle : " << area << endl;
	}
};

int main()
{
	Shape *ptr[2];
	Circle c1;
	Rectangle r1;
	ptr[0]=&c1;
	ptr[1]=&r1;
	int i;
	for(i=0; i<2; i++)
	{
		ptr[i]->display();
	}
	return 0;
}

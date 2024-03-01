#include<iostream>
using namespace std;

class Animal
{
	public:
	virtual void sound()
	{
		cout << "Animal Virtual Sound!!";
	}
	virtual void move()
	{
		cout << "Animal Virtual Move!!";
	}
};
class Dog : public Animal
{
	void sound()
	{
		cout << "Dog bahu bahu" << endl;
	}
	void move()
	{
		cout << "Dog Runing" << endl << endl;
	}
};
class Bird:public Animal
{
	void sound()
	{
		cout << "Bird chi chi" << endl;
	}
	void move()
	{
		cout << "Flaying" << endl;
	}
};

int main()
{
	Animal *ptr[2];
	Dog d;
	Bird b;
	ptr[0]=&d;
	ptr[1]=&b;
	for(int i=0; i<2; i++)
	{
		ptr[i]->sound();
		ptr[i]->move();
	}
	return 0;
}

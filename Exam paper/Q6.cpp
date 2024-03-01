#include<iostream>
using namespace std;

class Calcultor
{
	int a,b,total;
	public:
		void division()
		{
			cout << "Enter division A : ";
			cin >> a;
			cout << "Enter division B : ";
			cin >> b;
			try
			{
				if(b==0)
				{
					throw b;
				}
				else
				{
					total=a/b;
					cout << "Division : " << total;
				}
			}
			catch(int i)
			{
				cout << "Does Not Zero Division B!!";
			}
		}
};

int main()
{
	Calcultor c1;
	c1.division();
	return 0;
}

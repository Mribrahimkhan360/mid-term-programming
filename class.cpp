#include<bits/stdc++.h>
using namespace std;
class students

{
public:
	int roll;
	float result;
	string name;
	void display()
	{
		cout<<name <<endl;
		cout<<roll <<endl;
		cout<<result <<endl;
	}
};

int main()
{
	/* code */
	students bojFirst;

	bojFirst.name = "Ibrahim Khan";
	bojFirst.roll = 1;
	bojFirst.result =3.5;
	bojFirst.display();
	return 0;
}

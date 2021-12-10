#include <iostream>
using namespace std;


void math(int a,int b,int c)
{
	int a_1 = a;
	int b_1 = b;
	int c_1 = c;
	if (a_1==0||b_1==0||c_1==0)
	{
		cout << "Division by ZERO" << endl;
	}
	else { cout << a_1 / b_1 / c_1 <<endl; }
}


int main()
{

	math(30, 0, 1);

}
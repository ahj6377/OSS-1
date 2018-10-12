#include <iostream>
using namespace std;
void main()
{
	cout << "±¸±¸´Ü 1~9" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}
}
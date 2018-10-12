#include <iostream>
using namespace std;
void main()
{
	cout << "±¸±¸´Ü 1~8" << endl;
	for (int i = 1; i < 9; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}
}
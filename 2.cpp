#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter a number :";
	cin >> x;
	for(int i=0;i<=x;i++)
	{
		
		cout <<i <<"="<< i*i << endl;
		++i;
		
	}
	return 0;
}


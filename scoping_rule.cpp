#include<iostream>
using namespace std;
    
int x=10;
int main()
{
	int x=20;
	{
		int x=30;
		cout<<x<<endl;
	}
	    
	cout<<x<<endl;
	cout<<::x<<endl; //::x this is used for global value access
	    
}
    
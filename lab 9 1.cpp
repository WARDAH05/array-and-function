#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a limit:";
	cin>>n;
	int num[n];
	for (int i=0;i<n;i++)
	{
		cout<<"THE number is: ";
		cin>>num[i];
		cout<<endl;
	}
for (int i=0;i<n;i++)
	{
		cout<<num[i];
		
		cout<<endl;
	}
	for (int i=n-1;i>=0;i--)
	{
		
		cout<<num[i];
		
		cout<<endl;
	}
}
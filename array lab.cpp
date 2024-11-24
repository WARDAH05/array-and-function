#include<iostream>
using namespace std;
int main (){
	int size;
	int arr[size];
	cout<<"Enter a size of an array ";
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cout<<"element of array "<<endl;
		cin>>arr[i];
		
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	
}


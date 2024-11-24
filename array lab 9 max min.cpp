#include<iostream>
using namespace std;
int main(){
	int n,x;
	cout<<"Enter no of rows";
	cin>>n;
	cout<<"\nEnter no of columns";
	cin>>x;
	int arr[n][x];
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<x;j++){
			cin>>arr[i][j];
		
		}
	cout<<endl;
}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<x;j++){
			cout<<arr[i][j]<<" ";
		
		}
			cout<<endl;
}
int max=arr[0][0];
int min=arr[0][0];
for(int i=0;i<n;i++){
	for(int j=0;i<x;j++){
		if(arr[i][j]>max)
		 max=arr[i][j];
		if(arr[i][j]<min)
		 min=arr[i][j];
	
}
}
cout<<"\n max value "<<max;
cout<<"\n min value"<<min;
}
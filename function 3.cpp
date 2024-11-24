#include<iostream>
using namespace std;
int cube(int &n){
	return n*n*n;
}
int main(){
	int n;
	cout<<"Enter integers to find a cube(enter 0 to stop) :"<<endl;
do{
	cout<<endl;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	if(n!=0)
	cout<<"the cube of "<<n<<"is "<<cube(n)<<endl;
}	
	while(n!=0);
}
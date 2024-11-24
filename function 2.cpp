#include<iostream>
using namespace std;
int largest(int &a,int &b,int &c){
	if(a>b && a>c){
	
     cout<<a<<"no is the largest";
     }
	 else if (b>a && b>c){
	 	cout<<b<<"no is the largest";
	 	}
	 	else{
	 		cout<<c<<" no is the largest";
		 }
	 	
}
int main(){
	int a,b,c,lar;
	cout<<"Enter first num: ";
	cin>>a;
	cout<<"Enter second num: ";
	cin>>b;
	cout<<"Enter third num: ";
	cin>>c;
	
	largest(a,b,c);

	
	
	
}
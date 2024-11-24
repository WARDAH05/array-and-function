#include<iostream>
using namespace std;
int printTempOpinion(int &tem){
	if(tem<10){
		cout<<"Cold!";
		}
		else if (tem>=20 && tem<=30){
			cout<<"ok!";
		}
		else {
			cout<<"HOT!";
		}
}
int main(){
	int tem;
	cout<<"Enter a temperature";
	cin>>tem;
	printTempOpinion(tem);
}
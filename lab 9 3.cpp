#include <iostream>
#include<string>
using namespace std;

int main(){
	cout<<"                 QAWALI NIGHT "<<endl;
	int userno;
	int ticketprice=1500;
	int popcornprice=500;
	int usercost=0,totalcost=0;
	string username[20];
	//no of students attending
	cout<<"How many students attend the event (max 10)";
	cin>>userno;
	if(userno<=10){
	cin.ignore();
		for(int i=0;i<userno;i++){
	    cout<<"Enter the name of user "<<i+1 ;
		getline(cin,username[i]);
		}
		cout<<"Total User Cost"<<endl;
		for(int i=0;i<userno;i++){
			usercost=ticketprice+popcornprice;
			cout<<username[i]<<" : "<<"ticketPrice+PopcornPrice= "<<usercost;
			cout<<endl;
				totalcost+=usercost;
			}
			cout<<"Over-all cost"<<endl;
			cout<<totalcost;
			
}
	 else {
	cout<<"Error! "<<userno<<" not allowed";
	}
	return 0;
}

	

	
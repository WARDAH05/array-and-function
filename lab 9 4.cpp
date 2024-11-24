#include<iostream>
#include<string>
using namespace std;
int main(){
	cout<<"    GAME-NIGHT"<<endl;
	int maxVal=15;
	int numofgamers;
	cout<<"Number of gamers Gamers intrested (Max 15): ";
	cin>>numofgamers;
	int entryFee=1000;
	int snackcost=300;
	int gamercost=0,totalcost=0;
	string gamername[100];
	if(numofgamers<=15){
		cin.ignore();
		for(int i=0;i<numofgamers;i++){
			cout<<"Name of gamer "<<i+1;
			getline(cin,gamername[i]);
			cout<<endl;
			
		}
		cout<<"                       COST PRE GAMER"<<endl;
		for(int i=0;i<numofgamers;i++){
			gamercost=entryFee+snackcost;
			cout<<gamername[i]<<" :"<<"entryFee ="<<entryFee<<" :"<<"snackcost="<<snackcost<<": gamercost="<<gamercost;
			cout<<endl;
			totalcost+=gamercost;
		}
		cout<<"                  Overall gaming Cost"<<endl;
		cout<<"Total Cost:"<<totalcost;
	}

	else{
		cout<<"Error!not more than "<<maxVal<<" students Allowed";
	}
}
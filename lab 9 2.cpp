#include <iostream>
using namespace std;
int main(){
	int x,y;
	cout <<"ENTER THE NUM OF ROWS : ";
	cin>>x;
	cout <<"ENTER THE NUM OF columns : ";
	cin>>y;
	int arr[x][y];
	for(int i=0;i<x;i++){
		for (int j=0;j<y;j++){
			cin>>arr[i][j];
			
			
		}
		cout<<endl;
	}
	for(int i=0;i<x;i++){
		for (int j=0;j<y;j++){
			cout<<arr[j][i]<<" ";
			
}
cout<<endl;
}
}
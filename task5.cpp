#include<iostream>
using namespace std;

void possibleBonus(int x,int y);

main(){
int firstPosition,secondPosition;
cout<<"Enter your position: ";
cin>>firstPosition;
cout<<"Enter your friend's position: ";
cin>>secondPosition;
possibleBonus(firstPosition,secondPosition);

}
	void possibleBonus(int x,int y)
	{
          if(x+6>=y){
        cout<<"true";
		}
          if(x+6<y){
        cout<<"false";
		}

	}
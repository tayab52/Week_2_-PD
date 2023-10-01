#include<iostream>

using namespace std;
void checkSpeed(int x);

main(){
int speed;
cout<<"Speed: ";
cin>> speed;
checkSpeed(speed);
}

void checkSpeed(int x){
   if(x<=100){
	cout<<"Perfect! You're going good.";
	}
  if(x>100){
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}


}
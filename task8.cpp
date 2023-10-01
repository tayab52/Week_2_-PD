#include<iostream>
using namespace std;
void pet(int holidays);

main(){
int Holidays;
cout<<"Holidays: ";
cin>>Holidays;

pet(Holidays);

}

	void pet(int holidays){
        int WorkingDays=365-holidays;
        int remainingTime,Hours;
        float x,minutes;
        int totalTime=(holidays*127)+(WorkingDays*63);

        if(totalTime>=30000){
         remainingTime=totalTime-30000;
         x=remainingTime/60;
	Hours=remainingTime/60;
       minutes=(x-Hours)*60;
       cout<<"Tom sleeps well"<<endl;
	cout<<Hours<<" hours and "<<minutes<<" minutes less for play";

				}
if(totalTime<30000){
         remainingTime=30000-totalTime;
         x=remainingTime/60;
	Hours=remainingTime/60;
       minutes=(x-Hours)*60;
       cout<<"Tom will run away"<<endl;
	cout<<Hours<<" hours and "<<minutes<<" minutes for play";

				}



				}
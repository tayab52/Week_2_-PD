#include<iostream>

using namespace std;
void tpChecker(int x,int y);

main(){
int Tissuepaper;
int People;  
cout<<"Number of people in the household: ";
cin>>People;
cout<<"Number of rolls of TP: ";
cin>>Tissuepaper;
tpChecker(People,Tissuepaper);

	}
	void tpChecker(int x,int y){
	float sheets,tpUsesperDay,totalDays;         
	sheets=y*500;
	tpUsesperDay=x*57;
	totalDays=sheets/tpUsesperDay;
		if(totalDays>=14){
    cout<<"Your TP will last "<<totalDays<<" days, no need to panic!";

				}
		if(totalDays<14){
    cout<<"Your TP will last only "<<totalDays<<" days, buy more!";

				}

			} 
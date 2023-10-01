#include<iostream>

using namespace std;
void longestTime(float x,float y);

main(){
float Hours,Minutes;
cout<<"Enter the number of hours: ";
cin>>Hours;
cout<<"Enter the number of minutes: ";
cin>>Minutes;
longestTime(Hours,Minutes);

	}
void longestTime(float x,float y){
       float z=x*60;
      if(z>y){
       cout<<x;
		}
	if(z<y){
        cout<<y;
		}
				} 
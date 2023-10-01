#include<iostream>

using namespace std;
void IsEqual (int x,int y);

main(){
int Num_1,Num_2;
cout<<"Enter the first number: ";
cin>> Num_1;
cout<<"Enter the second number: ";
cin>> Num_2;
IsEqual (Num_1,Num_2);

}

void IsEqual (int x,int y){
   if(x==y){
	cout<<"true";
	}
  if(x!=y){
	cout<<"false";
	}


}
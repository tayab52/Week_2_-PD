#include<iostream>

using namespace std;
void Reverse(string x);

main(){
string Word;
cout<<"Enter 'true' or 'false': ";
cin>> Word;
Reverse(Word);
}

void Reverse(string x){
   if(x=="false"){
	cout<<"true";
	}
  if(x=="true"){
	cout<<"false";
	}


}
#include<iostream>
#include<windows.h>

using namespace std;

void myName();
void gotoxy(int x,int y);
void Name();

main (){
int x,y;
system("cls");
gotoxy(15,5);
Name();
myName ();

}

void Name(){
cout<<"TAYYAB";

}

void myName () {


cout<<" #########    #      #     # #     #    #    ###   "<<endl;
gotoxy(15,5);
cout<<"     #       ###      #   #   #   #    ###   #  #  "<<endl;
gotoxy(15,5);
cout<<"     #      #   #      ###     ###    ## ##  #  #  "<<endl;
gotoxy(15,5);
cout<<"     #     #######      #       #    ####### ###   "<<endl;
gotoxy(15,5);
cout<<"     #     #     #      #       #    #     # #  #  "<<endl;
gotoxy(15,5);
cout<<"     #     #     #      #       #    #     # #  #  "<<endl;
gotoxy(15,5);
cout<<"     #     #     #      #       #    #     # ###   "<<endl;
		}

void gotoxy (int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
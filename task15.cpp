#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy(int x,int y);
void characterH(int x,int y);
void characterA(int x,int y);
void characterS(int x,int y);
void characterS(int x,int y);
void characterA(int x,int y);
void characterN(int x,int y);

main (){
int x,y;
system("cls");
gotoxy(15,5);

characterH (x,y);
characterA (x,y);
characterS (x,y);
characterS (x,y);
characterA (x,y);
characterN (x,y);
}


void characterH () {


cout<< "##              ##";
cout<< "##              ##";
cout<< "##              ##";
cout<< "##              ##";
cout<< "##              ##";
cout<< "##################";
cout<< "##              ##";
cout<< "##              ##";
cout<< "##              ##";
cout<< "##              ##";
cout<< "##              ##";    
		}
void characterA () {


cout<< "      #####         ";
cout<< "     ##   ##         ";
cout<< "    ##     ##        ";
cout<< "   ##       ##       ";
cout<< "  ##         ##     ";
cout<< " ###############    ";
cout<< " ##           ##    ";
cout<< " ##           ##    ";
cout<< " ##           ##    ";
cout<< " ##           ##    ";
cout<< " ##           ##    ";    
		}
void characterS () {


cout<< "         ########    "<<endl;
cout<< "";     ###     ###   "<<endl;
cout<< "";    ###            "<<endl; 
cout<< "";     ###           "<<endl;  
cout<< "";       ###         "<<endl;      
cout<< "";         ###       "<<endl;      
cout<< "";          ###      "<<endl;          
cout<< "";           ###     "<<endl;     
cout<< "";   ###       ###   "<<endl;              
cout<< "";    ##########     "<<endl;
}

void characterN(){


cout<<"####           ####"<<endl;
cout<<"##  ##         ##  "<<endl;
cout<<"##   ##        ##  "<<endl;
cout<<"##    ##       ##  "<<endl;
cout<<"##     ##      ##  "<<endl;
cout<<"##      ##     ##  "<<endl;
cout<<"##       ##    ##  "<<endl;
cout<<"##        ##   ##  "<<endl;
cout<<"##         ##  ##  "<<endl;
cout<<"##          #####  "<<endl;
cout<<"##           ###   "<<endl;



}

void gotoxy (int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
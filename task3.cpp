#include<iostream>
using namespace std;

void checkDiscount(string countryName,float ticketPrice);

main(){
string Country;
float Ticket;
cout<<"Enter the country's name: ";
cin>>Country;
cout<<"Enter the ticket price in dollars: $";
cin>>Ticket;
checkDiscount("Country",Ticket);
return 0;	
}
	void checkDiscount(string countryName,float ticketPrice)
	{
          float priceAfterDiscount;


                       if(countryName=="Pakistan"){
                                   priceAfterDiscount=ticketPrice-(ticketPrice*0.05);
 
                       		  cout<<"Final ticket price after discount: $"<<priceAfterDiscount;
					}
                       if(countryName=="Ireland"){
                         priceAfterDiscount=ticketPrice-(ticketPrice*0.1);
		  cout<<"Final ticket price after discount: $"<<priceAfterDiscount;
					}
                       if(countryName=="India"){
                         priceAfterDiscount=ticketPrice-(ticketPrice*0.2);
		  cout<<"Final ticket price after discount: $"<<priceAfterDiscount;
					}
                       if(countryName=="England"){
                         priceAfterDiscount=ticketPrice-(ticketPrice*0.3);
		  cout<<"Final ticket price after discount: $"<<priceAfterDiscount;
					}
                       if(countryName=="Canada"){
                         priceAfterDiscount=ticketPrice-(ticketPrice*0.45);
		  cout<<"Final ticket price after discount: $"<<priceAfterDiscount;
					}
	}
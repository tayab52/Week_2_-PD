#include<iostream>

using namespace std;
void flowerShop(int redRose,int whiteRose,int Tulips);

main(){
int redrose,whiterose,tulips;
cout<<"Red Rose: ";
cin>>redrose;
cout<<"White Rose: ";
cin>>whiterose;
cout<<"Tulips: ";
cin>>tulips;
flowerShop(redrose,whiterose,tulips);

}
void flowerShop(int redRose,int whiteRose,int Tulips){
  float originalPrice,priceAfterDiscount;
   redRose=redRose*2;
   whiteRose=whiteRose*4.1;
   Tulips=Tulips*2.5; 
   originalPrice=redRose*whiteRose*Tulips;
   cout<<"Original Price: "<<originalPrice;
			if(originalPrice>200){
			priceAfterDiscount=originalPrice-(originalPrice*0.2);
			cout<<"Price After Discount: "<<priceAfterDiscount;
						}
			if(originalPrice<200){
			priceAfterDiscount=originalPrice;
			cout<<"Price After Discount: "<<priceAfterDiscount;
						}
}
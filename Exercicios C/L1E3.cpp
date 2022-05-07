#include <iostream>
using namespace std;
int main(){
	int h1,h2,m1,m2,tm;
	while(true){
		cout<<"entrada - ";cin>>h1>>m1>>h2>>m2;
		if(h1==0 and h2==0 and m1==0 and m2==0){
			return 0;
		}
		if(h1==0){
			h1=24;
		}
		if(h2==0){
			h2=24;
		}
		m1=m1+h1*60;
		m2=m2+h2*60;
		tm=m2-m1;
		if(tm<0){
			tm+=1440;
		}
		cout<<"Saida - "<<tm<<endl;
	}
}
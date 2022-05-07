#include <iostream>
using namespace std;
int main(){
	int entry=1;   //input
	int p_num;   //Prime numbers
	int aux;     //auxiliary
	int x,y;
	
	while(entry>0){
		cout<<endl<<"Digite um numero - ";cin>>entry;
		x=2;
		p_num=0;
		if(entry<=0){break;}
		while(entry>p_num){
			y=x;
			aux=0;
			while(x>=y and y>=1){
				if(x%y==0){
					aux+=1;
				}
				y--;
			}
			if(aux==2){
				p_num++;
				cout<<x<<" ";
			}
			x++;		
		}
	}
}
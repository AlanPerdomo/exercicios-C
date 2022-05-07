#include <iostream>
using namespace std;
int main(){
    int casos, figsA, figsB, gcd, num;
    bool test_a,test_b;
    cout << "Quantos casos? ";cin >> casos;
    for(int i=0;i<casos;i++){
        cout << "Entrada - ";cin >> figsA >> figsB;
        num = 2;
    gcd = 1;
        if(figsA == 0 or figsB == 0 or (figsA == 0 and figsB == 0)){
        gcd = 0;
        }
        if(figsA == 1 or figsB == 1 or (figsA == 1 and figsB == 1)){
        gcd = 1;
        }
        else{            
            while(figsA > 1 or figsB > 1){
                test_a=false;
                test_b=false;
                if(figsA % num == 0){
                    figsA = figsA / num;
                    test_a = true;
                }
                if (figsB % num == 0){
                    figsB = figsB / num;
                    test_b = true;
                }            
                if(test_a and test_b){
                gcd *= num;
                }
                if(!test_a or !test_b){
                    num += 1;
                }
            }
        }
        cout<<gcd<<endl;
    }
}
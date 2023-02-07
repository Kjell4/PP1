#include <iostream>
using namespace std;

int main(){
	int n,s;
	cin>>n;
	s=0;
    for(int j=0;j<1000000000;j++){
    	s+=1;
    	if(j%7==0){n+=0;}
    	if(j%2==0 && j%7!=0){n-=4;}
    	if(j%2==1 && j%7!=0){n+=3;}
    	if(n<=0){break;
		}
	}	

	cout << s;
}

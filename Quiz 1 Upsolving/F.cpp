#include <iostream>
using namespace std;

int main(){
	int x1,y1,x2,y2,x,y,xmin,xmax,ymin,ymax;
	cin>>x1>>y1>>x2>>y2>>x>>y;
	if(x1<=x2){xmax=x2;
	xmin=x1;
	}
	else{xmax=x1;
	xmin=x2;
	}
	if(y1<=y2){ymax=y2;
	ymin=y1;
	}
	else{ymax=y1;
	ymin=y2;
	}
	if(x1<=x && x<=x2 && y2<=y && y<=y1){cout<<"yes";
	}
	else{cout<<"no";
	}
	
}
#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
int a[n][n] , max1=0, max2=0;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin >> a[i][j];
    }
}

int max=a[0][0];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]>max){
            max2=max;
            max=a[i][j];
        }
        else if(a[i][j]!=max){
            if(a[i][j]>max2){
                max2=a[i][j];
            }
        }
    }
}

cout << max2;

}
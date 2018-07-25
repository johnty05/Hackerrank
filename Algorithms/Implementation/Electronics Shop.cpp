#include<vector>
#include<iostream>
using namespace std;


int main(){

    int s,n,m,a,endResult=-1,keyboard[100],usb[100];

    cin>>s>>n>>m;
    for(int i = 0; i < n; i++)cin>>keyboard[i];
    for(int i = 0; i < m; i++)cin>>usb[i];

    for(int i = 0; i < n; i++){
        for(int j=0; j<m; j++){
            if(keyboard[i]+usb[j] <= s)endResult = max(endResult,keyboard[i]+usb[j]);
        }
    }
    cout<<endResult<<endl;
    return 0;
} 

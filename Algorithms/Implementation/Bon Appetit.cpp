#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


 
    int main() {
   int n,k;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    long long bchar;
    cin>>bchar;
    long long sum=0;
    for(int i=0;i<n;i++)
        {
        if(i!=k)
            {
            sum=sum+c[i];
        }
    }
    double x = sum/2;
    if(x==bchar)
        cout<<"Bon Appetit";
    else
        cout<<abs(x-bchar);
    return 0;
}


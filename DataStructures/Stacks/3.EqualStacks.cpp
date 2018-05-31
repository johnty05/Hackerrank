#include <map>
#include <set>
#include <list>
#include <cmath>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include<iostream>

using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int h1 = 0, h2 = 0, h3 = 0; // heights of the 3 stacks
    vector<int> T1(n1);
    for(int i = 0; i < n1; i++){
       cin>>T1[i];
       h1 += T1[i];
    }
    vector<int> T2(n2);
    for(int i = 0; i < n2; i++){
       cin>>T2[i];
       h2 += T2[i];
    }
    vector<int> T3(n3);
    for(int i = 0; i < n3; i++){
       cin>>T3[i];
       h3 += T3[i];
    }
    //Remove the blocks from the tallest first
    bool eqHt = false;
    if(h1 == h2 && h2 == h3) {
        eqHt = true;
    }
    int r1 = 0, r2 = 0, r3 = 0; // index of which cylinder to remove
    while(!eqHt) {
        if(h1 >= h2 && h1 >= h3) {
            h1 -= T1[r1];
            r1++;
        } else if(h2 >= h1 && h2 >= h3) {
            h2 -= T2[r2];
            r2++;
        } else if(h3 >= h1 && h3 >= h2) {
            h3 -= T3[r3];
            r3++;
        }
        if((h1 == h2 && h2 == h3) || (h1 == 0 && h2 == 0 && h3 == 0)) {
            eqHt = true;
        }
    }
    cout<<h1;
    return 0;
}

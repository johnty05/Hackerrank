#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,tmp =0,max =0;
    int ind=0;
    cin >> n;
    vector<int> types(n);
    
    for(int t = 0; t < n; t++){
       cin >> types[t];
       if(types[t] > max)
           max = types[t];
    }
    vector<int> count(max);
    for(int i = 0; i < types.size(); i++)
        count[types[i]]++;
    for(int i = 0; i <= max; i++){
        if(count[i] > tmp){
            tmp = count[i];
            ind = i;
        }
    }
    cout << ind << endl;
    return 0;
}

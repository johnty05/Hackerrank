#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<long int> stack,m;
    m.push(-1);
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int x;
        cin>>x;
        if(x==1){
            int z;
            cin>>z;
            stack.push(z);
            if(z>=m.top())
                m.push(z);
            
        }
        
        else if(x==2){
            int q;
            q=stack.top();
            if(q==m.top())
                m.pop();
            stack.pop();
                
        }
        
        else if(x==3){
            cout<<m.top()<<endl;
        }
        i++;
    }
    return 0;
        
}

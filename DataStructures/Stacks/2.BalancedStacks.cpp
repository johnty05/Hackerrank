#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool paired(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool checkBalanced(string bracket)
{
	stack<char>  S;
	for(int i =0;i<bracket.length();i++)
	{
	    if(bracket[0]==')'||bracket[0]=='}'||bracket[0]==']')
            return false;
		if(bracket[i] == '(' || bracket[i] == '{' || bracket[i] == '[')
			S.push(bracket[i]);
		else if(bracket[i] == ')' || bracket[i] == '}' || bracket[i] == ']')
		{
			if(!paired(S.top(),bracket[i]))
				return false;
            else if(S.empty())
                return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}

int main()
{
    int n;
	string brackStr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>brackStr;
        if(checkBalanced(brackStr))
		  cout<<"YES\n";
	    else
		  cout<<"NO\n";
    }
}




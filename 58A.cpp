#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
string v="hello";
int count=0;
 
for(int i=0;i<s.length();i++)
{
    if(s[i]==v[count])
    {
        count++;
    }
}
 
if(count==5)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}
 
}
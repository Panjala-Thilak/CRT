#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    s1=s;
    sort(s.begin(),s.end());
    long int count=1;
    do
    {
        if(s==s1)
        break;
        count++;
    }while(next_permutation(s.begin(),s.end()));
    cout<<count<<endl;
    return 0;
}
/*OUTPUT
string                                                         
598  
*/

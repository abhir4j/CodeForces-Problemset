#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cnt=0;;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[1]=='+') cnt+=1;
        else cnt-=1;
    }
    cout<<cnt;
    
    return 0;
}

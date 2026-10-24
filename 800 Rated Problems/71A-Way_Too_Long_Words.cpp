#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int b=s.length();
        
        if(b>10){
            cout << s[0] << b-2 << s[b-1] << endl;
        }
        else{
            cout << s << endl;
        }
    }
}

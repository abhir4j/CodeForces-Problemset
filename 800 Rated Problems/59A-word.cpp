#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int uc = 0; //uc--> upper count
    int lc = 0; //lc--> lower count

    for(char c:s){
        if(isupper(c)){
            uc++;
        }else{
            lc++;
        }
    }
    
    if(uc>lc){
        for(char &c:s){
            c = toupper(c);
        }
    }else{
        for(char &c:s){
            c = tolower(c);
        }
    }
    cout << s << endl;
    
    return 0;
}

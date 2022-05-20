#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i;
    int count = 0;
    string result="";
    for(i=0;i<s.length();i++) {
        char currentChar = s[i];
        char nextChar = s[i + 1];
        count++;
        if(currentChar != nextChar){
            result = result + s[i] + to_string(count);
            count=0;
        }
    }
    cout <<result;
}
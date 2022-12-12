#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<string>A;
    string a;
    while(cin>>a){
        A.push_back(a);
    }
    // ctrl z - прекращение ввода
    
    sort(A.begin(), A.end());
    for(auto a: A){
        cout<<a<<" ";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int number(vector<int>&A, int t){

    for(int i = 0; i<A.size(); i++){
        if (A[i]==t) return i;
    }
    return -1;
}

int main(){
    vector<vector<int>>A;
    A.resize(2);
    
    int x, num;

    while (cin>>x){
        num = number(A[0] ,x);
        if( num == -1){
            A[0].push_back(x);
            A[1].push_back(1);
        }
        else{
            A[1][num]++;
        }
    }
    for(auto x:A[0]) cout<<x<<" ";
    cout<<endl;
    for(auto x:A[1]) cout<<x<<" ";

    return 0;
}
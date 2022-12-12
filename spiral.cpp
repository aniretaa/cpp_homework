#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;
    int A[N][N];

    int k = 1, i = 0, j = 0;    

    int up = 0, down = 0, left = 0, right = 0;

    while (k <= N*N){

        A[i][j] = k;

        if (i == up && j < N - right - 1)
            j+=1;
        else if (j == N - right - 1 && i < N - down - 1)
            i+=1;
        else if (i == N - down - 1 && j > left)
            j-=1;
        else
            i-=1;

        if ((i == up + 1) && (j == left)){
            ++up;
            ++down;
            ++left;
            ++right;
        }
        k+=1;

    }

    cout <<"   ";
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cout<<A[i][j]<<" ";
            cout.width(4);
        }
        cout<<endl;
    }

    return 0;
}



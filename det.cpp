#include <bits/stdc++.h>
#include <vector>

using namespace std;

void print_vector(vector<vector<double>> &T){
    int N = T.size();
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N;j++)
            cout<<T[i][j]<<" ";
        cout<<endl;
}

}

double det(vector<vector<double>> &T){
    double Det = 1;
    int N = T.size();
    for(int i = 0; i<N; i++){
        for(int j = i+1; j<N; j++){
            double p = T[j][i]/T[i][i];
            for(int k = 0; k<N; k++){
                T[j][k] = T[j][k] - p*T[i][k];
                
            }

        }
    }
    for(int i = 0; i<N; i++){
        Det*=T[i][i];
    }
    return Det;

}


int main(){
    int N;
    cin>>N;
    vector<vector<double>>A;

    for (int i = 0; i<N; i++)
    { 
        A.push_back(vector<double>(N, 0));
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            A[i][j] = rand()%10;
        }
    }


    print_vector(A);
    cout<<endl;
    double ans = det(A);
    cout<<endl;
    cout<<"Определитель матрицы = "<<ans;

    return 0;
}

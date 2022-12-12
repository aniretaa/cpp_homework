#include <iostream>
#include <math.h>
using namespace std;

pair<int*, int> fun(){   // функция для записи массива
    int N = 100000;
    int len=0;
    int *array = new int[N];

    for (int i=0; i<N; i++){
        int num;
        cin>>num;
        if (num!=0){
            len+=1;
           array[i]=num;
        }else {
            break;
        }
    }

    int *normarr= new int[len];

    for (int i=0; i<len; i++){
        normarr[i] = array[i];
    }
    delete []array;
    return {normarr,len};
}

pair<int*, int> five(int arr [], int size){ // функция редачить
    int len = 0;
    int *array= new int[size];
    for (int i=0; i<size; i++){
        if (arr[i]>=5){
            array[len] = arr[i];
            len +=1;
        }
    }

    int *normarr= new int[len];
    for (int i=0; i<len; i++){
        normarr[i] = array[i];
    }
    delete []array;
    return {normarr,len};
}


int main(){
    auto ans = fun();
    cout<<"task 1"<<endl;
    for (int i=0; i<ans.second; i++){
        cout<<ans.first[i]<<" ";
    }
    cout<<endl;
    cout<<"длина массива = "<<ans.second;
    cout<<endl;

    auto ans2 = five(ans.first, ans.second);
    delete []ans.first;
    cout<<"task 2"<<endl;
    for (int i=0; i<ans2.second; i++){
        cout<<ans2.first[i]<<" ";
    }
    cout<<endl;
    cout<<"длина массива = "<<ans2.second;


    return 0;
}
#include <iostream>
using namespace std;

int How_Many_Trucks(int N,int w[]){
    int weight=0,j=0,trucks=0;
    while(j<N){
        weight = weight + w[j];
        if (weight > 1000){
            trucks++;
            j--;
            weight = 0;
        }
        if (j == N-1){
            trucks++;
        }
        j++;
    }
    return trucks;
}

int main(){
    int N;
    cin >> N;

    int w[N];
    for (int i=0;i<N;i++){
        cin >> w[i];
    }
    cout << How_Many_Trucks(N,w);
    return 0;
}

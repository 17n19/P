#include<iostream>
using namespace std;

int main(){
    int N, i, j, k;
    cin >> N;
    for(i=N;i>=1;i--){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=N;k>=i;k--){
            cout<<"*";
        }
    cout<<"\n";
    }
    return 0;
}

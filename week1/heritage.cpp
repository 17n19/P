#include<iostream>
using namespace std;

int main(){
    int N, m, money=0;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> m;
        if (m>0){
            money += m;
        }
    }
    cout << money;
    return 0;
}

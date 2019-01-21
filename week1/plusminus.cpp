#include<iostream>

using namespace std;

int main(){
    int N, mnt[1000],result;
    char pm;
    cin >> N;
    cin >> mnt[0];
    result = mnt[0];
    for (int i=0;i<N-1;i++){
        cin >> pm;
        cin >> mnt[i+1];
        if (pm == '+') result+=mnt[i+1];
        else if (pm == '-') result-=mnt[i+1];
    }
    cout << result;
    return 0;
}

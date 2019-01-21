#include <iostream>
#include <cmath>
using namespace std;

int pairs(int N,int L,int pos[]){
    int result=0;
    for(int m=0;m<N-1;m++){
        for (int t=m+1;t<N;t++){
            int dist = abs(pos[m]-pos[t]);
            if (dist<= L){
                result++;
            }
        }
    }
    return result;
}

int main(){
    int N, L;
    cin >> N >> L;
    if ((N < 2) || (N > 10)){
        cin >> N;
    }
    if ((L <= 0) || (L >= 1000)){
        cin >> L;
    }
    int pos[N];
    for (int i=0;i<N;i++){
        cin >> pos[i];
    }
    cout << pairs(N,L,pos);
    return 0;
}

#include <iostream>

using namespace std;

int stars(int N){
    int i,j;
    for (i=1;i <= N;i++){
        for(j=1;j <=i;j++){
           cout << " ";
           if ((N-j) <= i){
            cout << "*";
           }
        }
        cout << "\n";
    }
    return 0;
}

int main(){
    int N;
    cin >> N;
    stars(N);
    return 0;
}

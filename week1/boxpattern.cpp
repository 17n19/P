#include <iostream>
using namespace std;

int main(){
    int n,_count=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout << j;
            _count++;
        }
        if(n-_count !=0){
            int x = n-_count;
            for(int t=1;t<=x;t++){
                cout << t;
            }
        }
        cout << "\n";
        _count = 0;
    }
    return 0;
}

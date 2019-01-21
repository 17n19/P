#include <iostream>
using namespace std;

int main(){
    int n, taller_count=0;
    cin >> n;
    int height[n];
    for(int i=0;i<n;i++){
        cin >> height[i];
    }
    for(int m=0;m<n;m++){
        for(int t=0;t<n;t++){
            if(height[m] < height[t]){
                taller_count++;
            }
        }
        cout << taller_count << endl;
        taller_count = 0;
    }
    return 0;
}

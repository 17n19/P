#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n,i=0,c=0;
    cin >> n;
    while(n < 0){
        cin >> n;
    }
    int arr[1000];
    while(n != 0){
        int digit = n%10;
        arr[i] = digit;
        n /= 10;
        c++;
        i++;
    }
    for(int m=1;m <= c;m++){
        if(arr[m-1] != arr[c-m]){
            cout << "no";
            exit(EXIT_FAILURE);
        }
    }
    cout << "yes";
    return 0;
}


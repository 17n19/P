#include <iostream>
using namespace std;

int normalize(int a, int b,int g){
    if (a == b){
        cout << "1/1";
    }
    else{
        cout << a/g << "/" << b/g;
    }
    return 0;
}

int GCD(int a,int b){
    while(a != b){
        if(a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
}


int main(){
    int a,b,g;
    cin >> a >> b;
    g = GCD(a,b);
    normalize(a,b,g);
    return 0;
}

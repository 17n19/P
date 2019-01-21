#include<iostream>
#include<cmath>
using namespace std;

int points(int x,int y,int p){
    float d;
    d = sqrt(pow(x,2)+pow(y,2));
    if (d <= 2){
        p += 5;
    }
    else if (d <= 4){
        p += 4;
    }
    else if (d <= 6){
        p += 3;
    }
    else if (d <= 8){
        p += 2;
    }
    else if (d <= 10){
        p += 1;
    }
    return p;
}

int main(){
    int N,X,Y,p=0;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> X >> Y;
        p = points(X,Y,p);
    }
    cout << p;
    return 0;
}

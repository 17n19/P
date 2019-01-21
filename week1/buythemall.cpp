#include<iostream>

using namespace std;


int min_price(int one,int two,int three,int p1,int p2,int p3){
    int mn;
    if (p1*one < p2*two && p1*one < p3*three)
        mn = p1*one;
    else if( p2*two < p1*one && p2*two < p3*three)
        mn = p2*two;
    else if (p3*three < p1*one && p3*three < p2*two)
        mn = p3*three;
    cout << mn;
}

int main(){
    int p1, p2, p3, N, T;
    int one=0, two=0, three=0;
    cin >> p1 >> p2 >> p3;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> T;
        if (T == 1)
            one++;
        else if (T == 2)
            two++;
        else if (T == 3)
            three++;
    }
    min_price(one,two,three,p1,p2,p3);
    return 0;
}


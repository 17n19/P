#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, c ,d,result;
    cin >> a >> b >> c >> d;
    while((a<0 || a>1000)|| (b<0 || b>1000) || (b<0 || b>1000) || (b<0 || b>1000)){
        cin >> a >> b >> c >> d;
    }
    result = a+b+c+d;
    cout << result;
    return 0;
}

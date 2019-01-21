#include <iostream>
using namespace std;

void dosth(int *a, int *b, int *c){
    *a += 10;
    b += 100;
    *c += 1000;
}

main(){
    int x = 1;
    int y = 2;
    int z = 3;
    dosth(&x,&y,&z);
    cout << x << " " << y << " " << z << endl;
}

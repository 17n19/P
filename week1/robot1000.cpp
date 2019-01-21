#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int x=0, y=0;

/*int missing(int x,int y,int k){
    int n, s, w, e,mn;
    n = y+k;
    s = y-k;
    w = x-k;
    e = x+k;
    if ((abs(n)+abs(x)) < (abs(s)+abs(x)) && (abs(n)+abs(x)) < (abs(w)+abs(y)) && (abs(n)+abs(x)) < (abs(e)+abs(y)))
        mn = (abs(n)+abs(x))*2;
    else if((abs(s)+Sabs(x)) < (abs(n)+abs(x)) && (abs(s)+abs(x)) < (abs(w)+abs(y)) && (abs(s)+abs(x)) < (abs(e)+abs(y)))
        mn = (abs(s)+abs(x))*2;
    else if((abs(w)+abs(y)) < (abs(n)+abs(x)) && (abs(w)+abs(y)) < (abs(s)+abs(x)) && (abs(w)+abs(y)) < (abs(e)+abs(y)))
        mn = (abs(w)+abs(y))*2;
    else
        mn = (abs(e)+abs(y))*2;
    cout << mn;
    return 0;
}
*/
int missing(int x,int y,int k){
    if (x>=0 && y>=0){
        for(int j;j<k;j++){
            if(y == 0)
                x--;
                k--;
            else
                y--;
                k--;
        }
    }
    else if(x < 0 && y > 0){
        for(int j;j<k;j++){
            if(y == 0)
                x--;
                k--;
            else
                y--;
                k--;
        }
    }
}




int point(char c){
    switch(c){
        case 'N':
            y += 1;
            break;
        case 'W':
            x -= 1;
            break;
        case 'S':
            y -= 1;
            break;
        case 'E':
            x += 1;
            break;
        case 'Z':
            x = 0;
            y = 0;
            break;
    }
    return 0;
}

int main(){
    int i=0,k;
    string c;
    cin >> c;
    cin >> k;
    for (i;i<c.length();i++){
        point(c[i]);
    }
    missing(x,y,k);
    return 0;
}

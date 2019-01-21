#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int x=0, y=0,n=0,e=0,w=0,s=0;

int missing(int k){
    for (int j=0;j<k;j++){
        if (n<s && n!=0)
            n--;
        else if (n>s && s!=0)
            s--;
        else if (w>e && e!=0)
            e--;
        else if (e>w && w!=0)
            w--;
        else{
            if (n>0)
                n--;
            else if (e>0)
                e--;
            else if (w>0)
                w--;
            else if (s>0)
                s--;
        }
    }
    cout << (abs(n-s)+abs(w-e))*2;
    return 0;
}

int point(char c){
    switch(c){
        case 'N':
            n++;
            break;
        case 'W':
            w++;
            break;
        case 'S':
            s++;
            break;
        case 'E':
            e++;
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
    missing(k);
    return 0;
}

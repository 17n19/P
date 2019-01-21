#include<iostream>
#include<string>
using namespace std;

int main(){
    char head='N',mnt[100];
    string cur;
    cin >> mnt;
    for(int i=0;mnt[i] != '\0';i++){
        if (mnt[i] == 'N'){
            if (head == 'N') cur+="F";
            else if (head == 'E') cur+="RRRF";
            else if (head == 'W') cur+="RF";
            else if (head == 'S') cur+="RRF";
            head = 'N';
        }
        else if (mnt[i] == 'E'){
            if (head == 'N') cur+="RF";
            else if (head == 'E') cur+="F";
            else if (head == 'W') cur+="RRF";
            else if (head == 'S') cur+="RRRF";
            head = 'E';
        }
        else if (mnt[i] == 'W'){
            if (head == 'N') cur+="RRRF";
            else if (head == 'E') cur+="RRF";
            else if (head == 'W') cur+="F";
            else if (head == 'S') cur+="RF";
            head = 'W';
        }
        else if (mnt[i] == 'S'){
            if (head == 'N') cur+="RRF";
            else if (head == 'E') cur+="RF";
            else if (head == 'W') cur+="RRRF";
            else if (head == 'S') cur+="F";
            head = 'S';
        }
        else if (mnt[i] == 'Z'){
            cur+="Z";
            head = 'N';
        }
    }
    cout << cur;
    return 0;
}

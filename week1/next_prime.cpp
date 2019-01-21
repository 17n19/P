#include <iostream>
using namespace std;

bool check_prime(int p)
{
	if (p <= 1) {
    	return false;
	}
	else{
    	for (int i=2;i <= p/2;i++){
    		if (p%i == 0){
        		return false;
        	}
    	}
	}
}

int prime(int x){
    int i = x+1;
	while(true){
		if (check_prime(i)){
			cout << i <<endl;
			break;
		}
		i++;
	}
}

int main(){
	int x;
	cin >> x;
	prime(x);
	return 0;
}

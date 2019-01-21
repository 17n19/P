#include <iostream>
using namespace std;

main()
{
  int height[1000];
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> height[i];
  }

  int max_height = height[0];
  int max_count = 0;
  max_count++;
  for(int h=1;h<n;h++){
    if(height[h] == max_height){
        max_count++;
    }
    else if(height[h] > max_height){
        max_height = height[h];
        max_count = 1;
    }
  }
  cout << max_count << endl;
}

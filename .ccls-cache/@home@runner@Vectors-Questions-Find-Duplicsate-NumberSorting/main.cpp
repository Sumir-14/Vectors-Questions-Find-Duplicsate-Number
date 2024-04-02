#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findduplicate(vector<int> & num) {
 sort(num.begin(), num.end());  


  for (int i = 0; i < num.size(); i++) {
    if (num[i] == num[i + 1]) {
      cout<<num[i];
    }
  }
  rreturn -1;
}

int main() {
  vector <int > num = {1,3,4,2};
    findduplicate(num);
  
  
}
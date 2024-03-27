#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void duplicatenum(vector<int> &num) { sort(num.begin(), num.end()); }

// int main()
int main() {
  vector<int> num = {2, 3, 1, 3, 5};
  duplicatenum(num);

  for (int i = 0; i < num.size() - 1; i++) {
    if (num[i] == num[i + 1]) {

      cout << num[i] << " ";
    } else {
      return 0;
    }
  }
}
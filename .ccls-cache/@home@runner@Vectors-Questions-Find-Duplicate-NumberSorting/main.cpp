#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Function to find duplicates in a vector of integers
void findduplicate(vector<int> &num, vector<int> &ans) {
  // Sort the vector to easily find duplicates
    sort(num.begin(), num.end());  

    // Loop through the sorted vector to find duplicates
    for (int i = 0; i < num.size() - 1; i++) {
      // If current element is equal to the next element
        if (num[i] == num[i + 1]) { 
           // Add the duplicate element to the answer vector
            ans.push_back(num[i]);  
        }
    }
}

// Main function
int main() {
  // Initialize a vector of integers
    vector<int> num = {1, 5, 9, 55, 66, 4, 5, 9, 7, 4, 8, 9}; 
   // Initialize an empty vector to store duplicate elements
    vector<int> ans;
  // Call the function to find duplicates
    findduplicate(num, ans); 

    // Loop through the duplicate elements vector and print them
    for (int i = 0; i < ans.size(); i++) {
      // Print each duplicate element
        cout << "The duplicate number is : " << ans[i] << endl; 
    }
   // Return 0 to indicate successful execution
    return 0;
}

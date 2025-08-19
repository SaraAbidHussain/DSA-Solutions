#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int start = 0;
        int end = arr.size() - 1;
        while(start <= end)
        {
            swap(arr[start], arr[end]);
            start++; end--; 
        }   
    }
};
int main()
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 5};
    obj.reverseArray(arr);
    for(int i : arr) {
        cout << i << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <iomanip>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int, int> index_map;

        for (int index = 0;; index++) {
            auto iter = index_map.find(target - nums[index]);

            if (iter != index_map.end())
                return vector<int> {index, iter -> second};

            index_map[nums[index]] = index;
        }   
    }
};
int main(){
    Solution Solution;
    int arr[4]={1, 2, 3, 4};
    int target = 3;
    
    return 0;


}

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int>::iterator it, it2 ;

        sort(nums.begin(), nums.end());

        it = unique(nums.begin(), nums.end());

        int count = distance(nums.begin(), it);

        return count ;
    }
};
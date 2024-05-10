class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, flag=0;
        vector<int> res ;

        for (i = 0; i < nums.size(); i++) {
            cout<< flag << endl;
            
            for (j = 1; j < nums.size(); j++) {
                

                if ( (nums[i] + nums[j] == target) && i!=j){
                    cout << i <<" " << j << endl;
                    res.push_back(i);
                    res.push_back(j);
                    flag=1;
                    break;
                }
                
            }
            if(flag ==1){
                cout << "broke" << endl;
                break;
            }
        }

        return res ;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       
        
        string ans = "" ;
        int flag= 1;


        for(int i=0; i< strs[0].size(); i++){

            
            

            for(int j=0 ; j<strs.size()-1; j++){
                int len = min(strs[j].size(), strs[j+1].size());
                

                if( (i > len || ((strs[j])[i]) != ((strs[j+1])[i]) ) ){
                    flag =0 ;
                    break;
                }


            }

            if(flag == 1){
                ans += (strs[0])[i] ;
            }

            else{
                break;
            }
        }

        return ans;
    }
    
};
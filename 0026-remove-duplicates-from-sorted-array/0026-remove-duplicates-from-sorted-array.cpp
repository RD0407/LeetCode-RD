class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
           if (nums.empty()) {
            return 0;
        }
     int mark = 1;
     for (int i=1; i< nums.size();i++){
         if (nums[i-1] != nums[i]){
             nums[mark]= nums[i];
              mark +=1;            
         }
     }
return mark;

    }
};
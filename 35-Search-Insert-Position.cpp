class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start =0 ; int middle;
        int end = nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            middle=mid;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return start ;
        // if(target>nums[middle]){
        //     return middle+1;
        // }
        // else {
        //     if(middle==0){
        //     return 0;
        //     }
        //     else{
        //         return middle;
        //     }
        // }
    }
};
class Solution {
public:
        int BinarySearch(vector<int>nums,int start,int end,int target)
        {
        
           while(start<=end)
        {
            int mid=start+(end-start)/2;
            if (nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            end=mid-1;
            else
            start=mid+1;
        }
        return -1;

        }
        int findPivot(vector<int>nums){
        int start=0;
        int end = nums.size()-1;
        while (start<end)
        {
            int mid = start+(end-start)/2;
            if(mid+1<nums.size() && nums[mid]>nums[mid+1])return mid;
            if(mid-1>=0 && nums[mid]<nums[mid-1])return mid-1;
            if(nums[start]<nums[mid])start=mid;
            else
            end=mid-1;
            
        }
        return start;
    }
    int search(vector<int>& nums, int target) {
        
    
   int x=findPivot(nums);
   int res;
   if(target>=nums[0]&&target<=nums[x])
   {
       res=BinarySearch(nums,0,x,target);
       return res;
   }
   if( x+1 < nums.size() && target>=nums[x+1] && target<=nums[nums.size()-1]){
   res=BinarySearch(nums,x+1,nums.size()-1,target);
    return res;}
        return -1;
    }

};

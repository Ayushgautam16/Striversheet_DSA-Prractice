862. Shortest Subarray with Sum at Least K
class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int s=0,j=0,m=INT_MAX;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(s<0){
                s=0;
                j=i+1;
             
            }
            if(nums[i]<0&&s>0){
                int a=i-1;
               while(a>=j&&nums[i]<0){
                    if(nums[i]+nums[a]<0){
                        nums[i]+=nums[a];//adding negatives back
                        nums[a]=0;
                    
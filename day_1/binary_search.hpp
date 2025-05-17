class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 ;
        int high = nums.size() - 1 ;
        int mid ;
        int result ;
        if(nums.at(low) == target)
        {
            return low ;
        }
        else if (nums.at(high) == target)
        {
            return high ;
        }
        while(low <= high)
        {
            mid = (low + high) / 2 ;
            result = nums.at(mid);
            if(result == target)
            {
                return mid ;
            }
            else if (result  > target)
            {
                high = mid - 1 ;
            }
            else if(result < target)
            {
                low = mid + 1 ;
            }
        }
        return -1 ;
    }
};
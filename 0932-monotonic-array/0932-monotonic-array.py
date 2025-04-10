class Solution(object):
    def isMonotonic(self, nums):
        is_decreasing = True
        is_increasing = True

        for i in range(0,len(nums)-1):
            if(nums[i]<nums[i+1]):
                is_increasing = False
            elif(nums[i]>nums[i+1]):
                is_decreasing = False
            if not is_decreasing and not is_increasing:
                return False
        return True
            
        


        
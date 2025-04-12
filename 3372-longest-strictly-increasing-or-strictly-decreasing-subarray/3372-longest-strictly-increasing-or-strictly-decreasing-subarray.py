class Solution(object):
    def longestMonotonicSubarray(self, nums):
        st1 = 1
        st2 = 1
        n = len(nums)
        x = 1
        y = 1
        for i in range(n-1):
            if(nums[i]<nums[i+1]):
                x+=1
            else:
                st1 = max(st1,x)
                x = 1
        for i in range(n-1):
            if(nums[i]>nums[i+1]):
                y+=1
            else:
                st2 = max(st2,y)
                y = 1
        st1 = max(st1,x)
        st2 = max(st2,y)
        return max(st1,st2)
    
        
class Solution(object):
    def getConcatenation(self, nums):
        n = len(nums)
        ans = [0]*2*n
        for i in range(n):
            ans[i] = nums[i]
        for i in range(n):
            ans[i+n] = nums[i]
        return ans

 
        
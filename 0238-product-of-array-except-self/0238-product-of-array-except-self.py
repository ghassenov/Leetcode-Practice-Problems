class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        prefix = [0]*(n)
        postfix = [0]*(n)
        ans = [0]*n
        n = len(nums)

        # fill the prefix array
        a = nums[0]
        prefix[0]= a
        for i in range(1,n):
            a *=nums[i]
            prefix[i] = a

        # fill the postfix array
        b = nums[n-1]
        postfix[n-1] = b
        for i in range(n-2,-1,-1):
            b *= nums[i]
            postfix[i] = b

        prefix = [1] + prefix
        postfix = postfix + [1]

        for i in range(n):
            ans[i] = prefix[i]*postfix[i+1]

        return ans
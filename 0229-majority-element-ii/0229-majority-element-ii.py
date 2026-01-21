class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        ans = []
        n = len(nums)
        mp = {}
        for x in nums:
            mp[x] = mp.get(x,0) +1

        for k,v in mp.items():
            if v> (n//3):
                ans.append(k)
        return ans
        
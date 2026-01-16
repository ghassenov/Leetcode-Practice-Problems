class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # hash table
        n = len(nums)
        ans = 0
        occ = 0
        hash_table = {}
        for x in nums:
            hash_table[x] = hash_table.get(x,0)+1
        for x,y in hash_table.items():
            if y>= int(n/2):
                if(y>= occ):
                    occ = y
                    ans = x
        return ans
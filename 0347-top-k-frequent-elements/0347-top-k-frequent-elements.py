class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        for x in nums:
            mp[x] = mp.get(x,0) + 1
        # Now we have constructed our hash map
        # we need to sort by values (frequencies)
        sorted_mp = dict(sorted(mp.items(),key=lambda item : item[1],reverse=True))
        ans = []
        for key in sorted_mp.keys():
            if(k == 0): break
            else:
                ans.append(key)
                k-=1
        return ans
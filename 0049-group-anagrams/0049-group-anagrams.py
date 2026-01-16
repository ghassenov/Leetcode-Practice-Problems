class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = defaultdict(list) #this will act as our hashmap
        for s in strs:
            count = [0]*26
            for c in s:
                count[ord(c)-ord('a')]+=1
            result[tuple(count)].append(s)
        
        return list(result.values())
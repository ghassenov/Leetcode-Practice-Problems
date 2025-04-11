class Solution(object):
    def scoreOfString(self, s):
        x = 0
        n = len(s)
        for i in range(0,n-1):
            x += abs(ord(s[i])-ord(s[i+1]))
        return x
        
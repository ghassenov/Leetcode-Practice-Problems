class Solution(object):
    def isPalindrome(self, x):
        ch = str(x)
        n = len(ch)
        l = 0
        r = n-1
        while(l<=r):
            if ch[l]!= ch[r]:
                return False
            l +=1
            r -= 1
        return True
        
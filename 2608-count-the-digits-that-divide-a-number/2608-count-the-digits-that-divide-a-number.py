class Solution(object):
    def countDigits(self, num):
        count = 0
        n = num
        while( n != 0):
            if num% (n%10) == 0:
                count += 1
            n = n/10
        return count
        
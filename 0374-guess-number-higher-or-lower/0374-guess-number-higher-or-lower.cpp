/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        // 1<= n <= 2^31 -1
        long long a = 1;
        long long b = n;
        long long m;
        while(a <= b){
            m = (a+b)/2;
            if(guess(m) == 0){
                return m;
            }
            else if(guess(m) == -1){
                b = m-1;
            }
            else{
                a = m+1;
            }
        }
        return m;
        
    }
};
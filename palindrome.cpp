class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)){
            return false;
        }
        int rem=0,revH=0;
            while(x>revH){
              rem=x%10;  
              revH=revH*10+rem;
              x=x/10;
            }
          return x==revH || x==revH/10;
    }
};
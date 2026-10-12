class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){return false;}
        long long reversed_num=0;
        long long original= x;
        while(x){
            int pop=x%10;
            x/=10;
            reversed_num=reversed_num*10 +pop;
        }
                if(reversed_num==original){
                 return true;
            

        } else{
            return false;
        }
    }
};

class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int count=0;
        while(num>0){
            int ld=num%10;
            if(temp%ld==0)count++;
            num/=10;
        }
        return count;
    }
};
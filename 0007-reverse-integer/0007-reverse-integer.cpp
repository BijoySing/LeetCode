class Solution {
public:
    int reverse(int x) {
      long long n=x;
long long   k=0;
        while(n!=0)
    {
k=k*10+n%10;  
        n/=10;
    }
        if(2147483647<abs(k))return 0;
 return k;}
};
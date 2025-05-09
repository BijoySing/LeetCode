class Solution {
public:
    int hammingWeight(uint32_t n) {

       bitset<32>bit(n);
       int c=0;
       for(int i=0;i<32;i++){
        if(bit[i])c++;
       }
       return c;
    }
};
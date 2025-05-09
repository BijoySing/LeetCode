class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x = 0;
        string s;
        bitset<32> bit(n);

        s = bit.to_string();
        // cout << s << endl;
        for (int i = 0; i < 32; i++) {
            x += (bit[i] << (32 - i-1));
            // cout << bit[i] << " ";
        }
        return x;
    }
};
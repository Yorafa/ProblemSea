class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a = 0;
        int p = 31;
        while (p != -1){
            a += (n&1) << p--;
            n >>= 1;
        }
        return a;
    }
};

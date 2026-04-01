class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0; // We will build the reversed answer here
        
        // We know we are always dealing with exactly 32 bits
        for (int i = 0; i < 32; i++) {
            
            // 1. Extract the rightmost bit of 'n'
            int bit = n & 1; 
            
            // 2. Shift 'result' left by 1 to make an empty space at the end
            // 3. Add the extracted 'bit' into that empty space using Bitwise OR (|)
            result = (result << 1) | bit; 
            
            // 4. Shift 'n' right by 1 to cue up the next bit for the next loop
            n >>= 1; 
        }
        
        return result;
    }
};
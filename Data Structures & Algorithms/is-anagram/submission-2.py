class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if not s or not t or len(s) != len(t):
            return False

        mp = {}
        for i in range(26):
            mp[i] = 0

        for x in s:
            mp[ord(x) - ord('a')] += 1
        
        for y in t:
            mp[ord(y) - ord('a')] -= 1
        
        for val in mp.values():
            if val != 0:
                return False
        
        return True
        


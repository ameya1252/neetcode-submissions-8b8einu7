class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mp = {}  # char -> index

        l = 0
        max_size = 0

        for r in range(len(s)):
            if s[r] in mp:
                l = max(l, mp[s[r]] + 1)

            mp[s[r]] = r
            max_size = max(max_size, r - l + 1)

        return max_size
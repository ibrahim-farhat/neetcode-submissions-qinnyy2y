class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # the following solution is efficient in memory space
        return sorted(s) == sorted(t)
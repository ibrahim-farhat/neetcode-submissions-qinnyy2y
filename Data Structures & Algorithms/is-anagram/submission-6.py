class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # the following function make the counting map for you
        return Counter(s) == Counter(t)
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for num in nums:
            x = num
            i = 0
            for y in nums:
                if x == y:
                    i += 1
            
            if i >= 2:
                return True
        return False
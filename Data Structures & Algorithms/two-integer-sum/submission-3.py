class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        solMap = {}

        for i, n in enumerate(nums):
            diff = target - n
            if diff in solMap:
                return [solMap[diff], i]
            else:
                solMap[n] = i
        
        return

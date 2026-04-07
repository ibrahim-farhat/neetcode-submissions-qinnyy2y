class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        A = {}
        Sol = [0, 0]

        for i in range(len(nums)):
            if (target - nums[i]) in A:
                Sol[1] = i
                Sol[0] = A[target - nums[i]]
                return Sol
            else:
                A[nums[i]] = i
        
        return Sol

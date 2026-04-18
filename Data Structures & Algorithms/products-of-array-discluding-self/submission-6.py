class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # brute force:
        result = []
        for i, x in enumerate(nums): 
            
            product = 1
            
            for j, y in enumerate(nums):
                if i == j:
                    continue
                
                product *= y
            
            result.append(product)
        
        return result
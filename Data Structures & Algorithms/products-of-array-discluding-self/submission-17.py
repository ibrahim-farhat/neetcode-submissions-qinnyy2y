class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # brute force O(n^2):
        # result = []
        # for i, x in enumerate(nums): 
            
        #     product = 1
            
        #     for j, y in enumerate(nums):
        #         if i == j:
        #             continue
                
        #         product *= y
            
        #     result.append(product)
        
        # return result

        # with division O(n):
        result = []

        nums_product = 1
        zeros_count = 0

        for num in nums:
            if num != 0:
                nums_product *= num
            else:
                zeros_count += 1
        
        for num in nums:
            if num != 0 and zeros_count > 0:
                result.append(0)
            elif num != 0:
                result.append(int(nums_product/num))
            else:
                if zeros_count > 1:
                    result.append(0)
                else:
                    result.append(nums_product)
        print(zeros_count, nums_product)
        return result
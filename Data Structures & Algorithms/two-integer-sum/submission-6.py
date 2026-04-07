class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # - traverse accross each two odds in the array
        # - if equal the target take them

        # - if target - element in the map => i, j
        # - else map (element) => i

        # for i, x in enumerate(nums):
        #     for j, y in enumerate(nums):
        #         if i == j:
        #             continue
        #         else:
        #             if x + y == target:
        #                 return [i, j]

        mapp = dict()
        for j, x in enumerate(nums):
            y = target - x
            if y in mapp:
                return [mapp[y], j]
            else:
                mapp[x] = j
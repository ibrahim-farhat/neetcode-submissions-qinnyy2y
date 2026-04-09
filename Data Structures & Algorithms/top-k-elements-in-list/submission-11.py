from collections import defaultdict

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # map to store the number as a key,
        # then the value will be incremented with each occurance for this.

        occ_map = defaultdict(int)
        for num in nums:
            occ_map[num] += 1

        # return sorted(occ_map, key=lambda x: occ_map[x], reverse=True)[:k]

        # using bucket sort
        buckets = [[] for _ in range(len(nums) + 1)]
        for num, freq in occ_map.items():
            buckets[freq].append(num)

        result = []
        for i in range(len(buckets) - 1, 0, -1):
            for num in buckets[i]:
                result.append(num)
                
                if len(result) == k:
                    return result
        # create a list with buckets = len(nums)
        # insert the 
from collections import defaultdict

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # map to store the number as a key,
        # then the value will be incremented with each occurance for this.
        occ_map = {}
        for num in nums:
            occ_map[num] = occ_map.get(num, 0) + 1

        return sorted(occ_map, key=lambda x: occ_map[x], reverse=True)[:k]
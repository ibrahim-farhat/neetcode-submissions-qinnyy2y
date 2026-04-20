class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # brute force O(nlogn)
        # sequences_found = {}
        
        # nums = sorted(nums)
        
        # for num in nums:
        #     seq_flag = 0
        #     for seq in sequences_found.values():
        #         if num - 1 == seq[-1]:
        #             seq.append(num)
        #             seq_flag = 1
        #     if seq_flag == 0:
        #         sequences_found[num] = []
        #         sequences_found[num].append(num)
        
        # longest_seq = 0
        # long = []

        # for seq in sequences_found.values():
        #     if len(seq) > longest_seq:
        #         longest_seq = len(seq)
        #         long = seq

        # return longest_seq

        # optimal solution O(n):
        nums_set = set(nums)
        longest = 0

        for num in nums:
            if num - 1 not in nums_set:
                length = 0
                while num + length in nums_set:
                    length += 1
            
                longest = max(longest, length)
        
        return longest
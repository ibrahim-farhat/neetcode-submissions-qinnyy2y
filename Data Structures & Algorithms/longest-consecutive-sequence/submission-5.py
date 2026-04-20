class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        sequences_found = {}
        nums = sorted(nums)
        for num in nums:
            seq_flag = 0
            for seq in sequences_found.values():
                if num - 1 == seq[-1]:
                    seq.append(num)
                    seq_flag = 1
            if seq_flag == 0:
                sequences_found[num] = []
                sequences_found[num].append(num)
        
        longest_seq = 0
        long = []

        for seq in sequences_found.values():
            if len(seq) > longest_seq:
                longest_seq = len(seq)
                long = seq

        print(sequences_found)
        return longest_seq
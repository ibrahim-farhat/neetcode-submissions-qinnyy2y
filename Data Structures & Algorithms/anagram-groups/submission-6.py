from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # sort all of them
        # map => each sorted string is a key
        # traverse accross all of them, if it is in the map, put the index in within it, else make another key
        # return the required list

        # with sorting solution:
        anagram_map = defaultdict(list)

        # for word in strs:
        #     key = ''.join(sorted(word))
        #     anagram_map[key].append(word)
        

        # without sorting:
        for word in strs:
            word_counts = [0] * 26
            for ch in word:
                word_counts[ord(ch) - ord('a')] += 1
            
            anagram_map[tuple(word_counts)].append(word)

        return list(anagram_map.values())
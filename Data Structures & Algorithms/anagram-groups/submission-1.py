class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # sort all of them
        # map => each sorted string is a key
        # traverse accross all of them, if it is in the map, put the index in within it, else make another key
        # return the required list

        str_map = dict()

        for i, s in enumerate(strs):
            x = ' '.join(sorted(s))
            if x in str_map:
                str_map[x].append(i)
            else:
                str_map[x] = []
                str_map[x].append(i)

        result = []
        j = 0

        for key, value in str_map.items():
            result.append([])
            for i in value:
                result[j].append(strs[i])
                
            j = j + 1

        return result
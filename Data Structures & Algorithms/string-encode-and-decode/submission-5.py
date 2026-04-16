class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = ""

        for string in strs:
            encoded_string += str(len(string))
            encoded_string += "#"
            encoded_string += string
        
        return encoded_string

    def decode(self, s: str) -> List[str]:
        
        i = 0
        result = []

        while i < len(s):
            j = i

            while s[j] != "#":
                j += 1
            
            string_length = int(s[i:j])

            string = str(s[j+1:j+1+string_length])

            result.append(string)
            
            i = j + 1 + string_length

        return result
        
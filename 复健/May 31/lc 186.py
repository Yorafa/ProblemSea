class Solution:
    def reverseWords(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        words = []
        curr = []
        for c in s:
            if c == " ":
                words.append(curr)
                curr = []
                continue
            curr.append(c)
        words.append(curr)
        res = []
        for lst in words[::-1]:
            res.extend(lst)
            res.append(" ")
        res.pop()
        for idx in range(len(res)):
            s[idx] = res[idx]

# O(1) space
# class Solution:
#     def reverse(self, l: list, left: int, right: int) -> None:
#         while left < right:
#             l[left], l[right] = l[right], l[left]
#             left, right = left + 1, right - 1
            
#     def reverse_each_word(self, l: list) -> None:
#         n = len(l)
#         start = end = 0
        
#         while start < n:
#             # go to the end of the word
#             while end < n and l[end] != ' ':
#                 end += 1
#             # reverse the word
#             self.reverse(l, start, end - 1)
#             # move to the next word
#             start = end + 1
#             end += 1
            
#     def reverseWords(self, s: List[str]) -> None:
#         """
#         Do not return anything, modify s in-place instead.
#         """
#         # reverse the whole string
#         self.reverse(s, 0, len(s) - 1)
        
#         # reverse each word
#         self.reverse_each_word(s)
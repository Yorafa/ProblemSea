class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        s = set(nums[0])
        for i in nums[1:]:
            s= s.intersection(set(i))
        s = list(s)
        s.sort()
        return s

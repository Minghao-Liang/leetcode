class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        l, r = -1, n
        if not nums:
            return [-1, -1]
        if n == 1:
            if nums[0] == target:
                return [0, 0]
            else:
                return [-1, -1]
        while l + 1 < r:
            mid = l + (r - l) // 2
            if nums[mid] >= target:
                r = mid
            else:
                l = mid
            i = r
        if r == n or nums[i] != target:
            return [-1, -1]
        else:
            l, r = -1, n
            while l + 1 < r:
                mid = l + (r - l) // 2
                if nums[mid] <= target:
                    l = mid
                else:
                    r = mid
                j = l
        return [i, j]
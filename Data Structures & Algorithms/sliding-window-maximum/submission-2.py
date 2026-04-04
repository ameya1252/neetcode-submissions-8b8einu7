class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        
        max_heap = []
        res = []

        l = 0
        r = l+k

        for l in range(len(nums)-k+1):

            max_heap = []

            for j in range(l, r):

                heapq.heappush(max_heap, -nums[j])
            
            res.append(-heapq.heappop(max_heap))

            r += 1

        return res
            



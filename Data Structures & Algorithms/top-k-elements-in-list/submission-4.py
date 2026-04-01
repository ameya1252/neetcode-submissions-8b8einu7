class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        mp = defaultdict(int)

        for n in nums:
            mp[n] += 1

        heap = []

        for num, count in mp.items():

            heapq.heappush(heap, (count, num))

            if len(heap) > k:
                heapq.heappop(heap)

        
        return [num for count, num in heap]


            
        

            


        
        
        
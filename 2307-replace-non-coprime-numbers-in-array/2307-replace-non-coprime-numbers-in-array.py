class Solution:
    def replaceNonCoprimes(self, nums: List[int]) -> List[int]:
        ans=[nums[0]]

        for i in range(1,len(nums)):
            curr=nums[i]
            while ans and gcd(ans[-1],curr)>1:
                curr=(curr*ans[-1])//gcd(ans[-1],curr)
                ans.pop()
            ans.append(curr)
        
        return ans
        
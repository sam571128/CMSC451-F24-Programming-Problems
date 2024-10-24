from itertools import accumulate


n = int(input())
nums = list(accumulate(map(int, input().split(" "))))
ans = 0
for start_index, start in enumerate(nums):
    ans = max(ans, start)
    for end in nums[start_index + 1:n]:
        ans = max(ans, end - start)
print(ans)
